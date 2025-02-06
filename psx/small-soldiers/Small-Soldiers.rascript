// Small Soldiers
// #ID = 18564

// Difficulty
DifficultyAddress = 0x0393C5
DifficultyLookup = {
    0: "Easy",
    1: "Normal",
    2: "Hard",
}

// Cheats
CheatInvincibilityAddress = 0x0393d8
CheatAllWeaponsAddress = 0x0393d9
CheatUnlimitedAmmoAddress = 0x0393da

SummaryKillsAddress = 0x0393dc
TriesAddress = 0x0393e3

// Mode
ModeAddress = 0x0393C4
ModeLookup = {
    0: "Campaign",
    1: "2P",
    2: "Demo",
}
function is_current_mode(mode) {
    return byte(ModeAddress) == mode
}

// Level
LevelAddress = 0x0393C9
LevelLookup = {
    0: "Gorgon",
    1: "Dimensional Temple",
    2: "Floating Fortress",
    3: "Spirit Bog",
    4: "Canyon Village",
    5: "Creepy Caverns",
    6: "Space Ship",
    7: "Hall of Patriots",
    8: "Graveyard of War",
    9: "Nuclear Mine",
    10: "Launch Center",
    11: "Ulhaden Fier",
    12: "Garrison Prime",
    13: "Inner Sanctum",
}
function is_current_level(level) {
    return byte(LevelAddress) == level
}
function is_previous_level(level) {
    return prev(byte(LevelAddress)) == level
}

LevelSecrets = {
    0: [3,1],
    1: [3,2],
    2: [2,1],
    3: [2,2],
    4: [4,1],
    5: [3,2],
    6: [2,1], 
    7: [3,2],
    8: [3,1],
    9: [3,2],
    10: [4,1],
    11: [2,2],
    12: [2,1],
    13: [1,0],
}

Timer = 0x09c240

LevelStatsPointer = 0x0A1D1C
LevelStatsOffsets = {
    "time": 0x0028,
    "vehicle": 0x002c, //24-bit pointer
    "lives": 0x02e4,
    "kills": 0x0388,
    "weapon_cooldown": 0x03a0,
    "equipped_weapon": 0x03ae,
    "green_ammo": 0x03ac,
    "blue_ammo": 0x03ae,
    "secrets": 0x03d0,
    "talismans": 0x03d2,
}
function LevelStats(stat) {
    return tbyte(LevelStatsPointer) + LevelStatsOffsets[stat]
}

// Screen
ScreenAddress = 0x03af30
ScreenLookup = {
    "main": 0x40019,
    "2P": 0x15518,
    "load": 0x124718,
    "password": 0x315218,
    "options_main": 0x265018,
    "options_controller": 0x274018,
    "options_analog": 0x443818,
    "options_sound": 0x595818,
    "credits": 0x565702,
    "summary": 0x554118,
}

LevelScreen = {
    0: 0x0823,
    1: 0x4819,
    2: 0x5726,
    3: 0x0735,
    4: 0x2138,
    5: 0x4430,
    6: 0x1946,
    7: 0x0543,
    8: 0x0350,
    9: 0x2153,
    10: 0x1957,
    11: 0x5260,
    12: 0x2153,
    13: 0x0665,
}

BriefingPointer = 0x03b244
function is_briefing_screen(level) {
    return ascii_string_equals(tbyte(BriefingPointer), "data\\screen\\brief\\lev" + level)
}

VideoAddress = 0x1FFE79

function is_current_screen(screen) {
    return dword(ScreenAddress) == screen
}
function is_previous_screen(screen) {
    return prev(dword(ScreenAddress)) == screen
}

// utility functions
function is_1P() => byte(ModeAddress) == 0
function is_hard() => byte(DifficultyAddress) == 2
function has_level_changed() => byte(LevelAddress) != prev(byte(LevelAddress))
function no_passwords() => disable_when(is_current_screen(ScreenLookup["password"]) && has_level_changed(), is_current_screen(ScreenLookup["main"]))
function no_cheats() => byte(CheatInvincibilityAddress) == 0 && byte(CheatAllWeaponsAddress) == 0 && byte(CheatUnlimitedAmmoAddress) == 0
function cheats_enabled() => byte(CheatInvincibilityAddress) == 1 || byte(CheatAllWeaponsAddress) == 1 || byte(CheatUnlimitedAmmoAddress) == 1
function is_scenario() => is_1P() && no_cheats()
function is_campaign() => is_1P() && no_cheats() && no_passwords()

function last_level_completed() {
    return 
        is_1P() && no_passwords() && no_cheats() &&
        is_current_level(length(LevelLookup)-1) && 
        ascii_string_equals(VideoAddress, "end.str") //last level doesn't have a summary screen
}

function level_completed(level) {
    if (level == length(LevelLookup)-1) {
        return last_level_completed()
    }
    return 
        is_previous_level(level) && is_current_level(level+1) && is_current_screen(ScreenLookup["summary"])
}

function collected_secrets(level) {
    target_secrets = LevelSecrets[level][0] + LevelSecrets[level][1]

    // current frame
    current_talismans = byte(LevelStats("talismans"))
    current_secrets = byte(LevelStats("secrets"))
    current_total_secrets =  current_secrets + current_talismans

    // delta frame  
    prev_secrets = prev(byte(LevelStats("secrets")))
    prev_talismans = prev(byte(LevelStats("talismans")))
    prev_total_secrets = prev_secrets + prev_talismans
    
    return 
        current_total_secrets == target_secrets &&
        prev_total_secrets == target_secrets - 1
}

Titles = {
    "progression": {
        0: "The Commandos Have Invaded Gorgon!",
        1: "The Dimensional Temple Is Under Attack!",
        2: "The Flagship of the Gorgonite Fleet Is Under Siege!",
        3: "Commando Invaders Are Defiling This Realm!",
        4: "The Commandos Are Raiding the Village!",
        5: "The Commandos Are Mining Gorgonite Ore!",
        6: "The Space Ship Devastator Is a Planet Killer!",
        7: "The Commandos Are Testing a Secret Super-Weapon!",
        8: "The Commandos Are Fueling Their Weapons of War!",
        9: "The Commandos Are Mining for Atomics!",
        10: "The Commando Space Fleet Is Preparing To Strike!",
        11: "The Commando Home-World Is On the Alert!",
        12: "The Commandos Are Manning Their Defenses!",
        13: "The War ends here!",
    },
    "collectables": {
        0: "Use the Spirit Wells to traverse this realm",
        1: "TODO 1",
        2: "TODO 2",
        3: "TODO 3",
        4: "TODO 4",
        5: "TODO 5",
        6: "TODO 6",
        7: "TODO 7",
        8: "TODO 8",
        9: "TODO 9",
        10: "TODO 10",
        11: "TODO 11",
        12: "TODO 12",
        13: "Death From Below",
    },
    "no_death" : {
        0: "Greetings. I am Archer, emissary or the Gorgonites.",
        1: "TODO 1",
        2: "TODO 2",
        3: "TODO 3",
        4: "TODO 4",
        5: "TODO 5",
        6: "TODO 6",
        7: "TODO 7",
        8: "TODO 8",
        9: "TODO 9",
        10: "TODO 10",
        11: "TODO 11",
        12: "TODO 12",
        13: "[NOT USED]",
    }
}

Points = {
    "progression": [2,2,2,2,2, 2,2,2,2,2, 2,2,2,2],
    "hard": [5,5,5,5,5, 5,5,5,5,5, 5,5,5,5],
    "collectables": [3,3,3,3,3, 3,3,3,3,3, 3,3,3,3],
    "no_death": [5,5,5,5,5, 5,5,5,5,5, 5,5,5,5],
}

for level in LevelLookup {

    progressionType = "progression"
    if (level == length(LevelLookup)-1) {
        progressionType = "win_condition"
    }
    // Progression Any difficulty
    achievement(
        title =  Titles["progression"][level],
        points = Points["progression"][level],
        type = progressionType,
        description = "Complete " + LevelLookup[level] + " on any difficulty without using passwords",
        trigger = is_campaign() && level_completed(level)
    )

    // Progression Hard mode
    achievement(
        title = Titles["progression"][level] + " [Hard]",
        points = Points["hard"][level],
        // technically redundant since passwords automatically set difficulty to normal
        description = "Complete " + LevelLookup[level] + " on Hard difficulty without using passwords",
        trigger = is_campaign() && level_completed(level) && is_hard()
    )

    // Collectables
    achievement(
        title = Titles["collectables"][level],
        points = Points["collectables"][level],
        description = "Collect all secrets and talismans in " + LevelLookup[level],
        trigger = is_scenario() && is_current_level(level) && collected_secrets(level)
    )

    // No-death
    // Note: No-death is always achieved on last level because if you die the boss returns to full health
    if(level != length(LevelLookup)-1) {
        achievement(
            title = Titles["no_death"][level],
            points = Points["no_death"][level],
            description = "Complete " + LevelLookup[level] + " without dying",
            trigger = is_scenario() && level_completed(level) && byte(TriesAddress) == 1
        )
    }
}

// extra challenges
// level 1: 
// kill all enemies
achievement(
    title = "Beware. There will be no mercy.",
    points = 3, // TODO
    description = "Kill all enemies in " + LevelLookup[0] + " and complete the level",
    trigger = is_scenario() && level_completed(0) && byte(LevelStats("kills")) == 21
)

    
// level 2:
// complete the level without killing any enemies
achievement(
    title = "The Gorgonites are peaceful. We mean no harm.",
    points = 3, // TODO
    description = "Complete " + LevelLookup[1] + " without killing any enemies",
    trigger = is_scenario() && level_completed(1) && byte(SummaryKillsAddress) == 0
)

// level 3:
// disable when shooting with main weapon (cooldown > 0)
function no_shooting() => 
    disable_when(
        byte(LevelStats("weapon_cooldown")) > 0 && is_current_screen(LevelScreen[2]), 
        is_briefing_screen(2)
        //is_current_screen(ScreenLookup["main"])
    )
achievement(
    title = "Punch It is desperate to hold it!",
    points = 3, // TODO
    description = "Complete " + LevelLookup[2] + " without using your main weapons",
    //trigger = is_scenario() && no_shooting() && trigger_when(level_completed(2)) && disable_when(!is_current_screen(LevelScreen[2]) && !is_current_level(2), is_current_screen(LevelScreen[2]) && is_current_level(2))
    trigger = is_scenario() && level_completed(2) && no_shooting()
)

    // level 4:
    // TODO

    // level 5:
    // TODO

    // level 6:
    // TODO

    // level 7:
    // TODO

    // level 8:
    // TODO

    // level 9:
    // TODO

    // level 10:
    // TODO

    // level 11:
    // TODO

    // level 12:
    // TODO

    // level 13:
    // TODO

function no_turret() => disable_when(byte(LevelStats("vehicle")) != 0 && is_current_screen(LevelScreen[13]), is_current_screen(ScreenLookup["main"]))
achievement(
    title = "No Problemo!",
    points = 25, // TODO
    description = "Defeat Chip Hazard without using the turret",
    trigger = is_scenario() && level_completed(13) && no_turret()
)

// Easter eggs
achievement(
    title = "An Adventure Through the Heart of Our Most Dangerous Conflict", 
    points = 1, // TODO
    description = "Watch the Medal of Honor promotional video",
    trigger = byte(ModeAddress) == 0 && ascii_string_equals(VideoAddress, "medal.str")
)

// Rich presence
rich_presence_conditional_display(cheats_enabled(), "Cheats enabled 🏴‍☠️")

rich_presence_conditional_display(is_current_mode(1), "2P mode")

rich_presence_conditional_display(is_current_mode(2), "Demo mode")

//rich_presence_conditional_display(IS_SCREEN, "In menu") //TODO

rich_presence_display("Level: {0} | ❤️: {1} | Difficulty: {2}",
    rich_presence_lookup("Level", byte(LevelAddress), LevelLookup),
    rich_presence_value("Number", byte(LevelStats("lives"))),
    rich_presence_lookup("Difficulty", byte(DifficultyAddress), DifficultyLookup)
)

for level in LevelLookup {
    //leaderboard(title, description, start, cancel, submit, value, format="VALUE", lower_is_better=false, id=0)
    leaderboard(
        title = "Best time in " + LevelLookup[level],
        description = "time",
        start = is_scenario() && is_current_level(level) && is_current_screen(LevelScreen[level]) && !is_previous_screen(LevelScreen[level]),
        cancel = is_current_screen(ScreenLookup["main"]),
        submit = level_completed(level),
        value = dword(Timer) * 2, // 30fps
        format = "FRAMES",
        lower_is_better = true
    )
}
