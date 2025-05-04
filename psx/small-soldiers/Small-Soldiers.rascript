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

SummaryLivesAddress = 0x0393ce
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

LevelDataPointer = 0x09fbd8
LevelDataOffsets = {
    "green_key": 0x0054, //8-bit
    "red_key": 0x005c, //8-bit
    "yellow_key": 0x0064, //8-bit
    "blue_key": 0x006c, //8-bit
}
function LevelData(data) {
    return tbyte(LevelDataPointer) + LevelDataOffsets[data]
}

LevelStatsPointer = 0x0a1d1c
LevelStatsOffsets = {
    "time": 0x0028,
    "vehicle": 0x002c, //24-bit pointer
    "lives": 0x02e4, //8-bit
    "kills": 0x0388, //8-bit
    "weapon_cooldown": 0x03a0, //8-bit
    "equipped_weapon": 0x03a4, //8-bit
    "green_ammo": 0x03ac, //8-bit
    "blue_ammo": 0x03ae, //8-bit
    "equipped_secondary": 0x03ce, //8-bit
    "secrets": 0x03d0, //8-bit
    "talismans": 0x03d2, //8-bit
    "mines": 0x03d6, //8-bit
    "gorgonites": 0x03da, //8-bit
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


VideoAddress = 0x1FFE79



// ***UTILITY FUNCTIONS***
function is_briefing_screen(level) {
    return ascii_string_equals(tbyte(BriefingPointer), "data\\screen\\brief\\lev" + level)
}
function is_current_screen(screen) {
    return tbyte(ScreenAddress) == screen
}
function is_previous_screen(screen) {
    return prev(tbyte(ScreenAddress)) == screen
}
function is_prior_screen(screen) {
    return prior(tbyte(ScreenAddress)) == screen
}
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
        //last level doesn't have a summary screen, so we check if the end video is playing    
        ascii_string_equals(VideoAddress, "end.str") &&
        dword(VideoAddress) != prev(dword(VideoAddress))
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

function collected_keys(keys) {
    conditions = true
    for key in keys {
        conditions = conditions && (byte(LevelData(key)) == 1 || byte(LevelData(key)) == 2)
    }
    return conditions
}

function level_challenge(level) {
    return is_scenario() &&
        is_current_level(level) && 
        is_current_screen(LevelScreen[level])
}

// *** SET DATA ***
IDs = {
    "progression": {
        0: 419778,
        1: 419779,
        2: 419780,
        3: 419781,
        4: 419782,
        5: 419783,
        6: 419784,
        7: 419785,
        8: 419786,
        9: 419787,
        10: 419796,
        11: 419797,
        12: 419798,
        13: 419788,                
    },
    "hard": {
        0: 419799,
        1: 419800,
        2: 419801,
        3: 419789,
        4: 419802,
        5: 419803,
        6: 419804,
        7: 419805,
        8: 419790,
        9: 419806,
        10: 419811,
        11: 419810,
        12: 419812,
        13: 419791,                
    },
    "collectables": {
        0: 419792,
        1: 419807,
        2: 419813,
        3: 419793,
        4: 419814,
        5: 419815,
        6: 419794,
        7: 419816,
        8: 419808,
        9: 419817,
        10: 419818,
        11: 419795,
        12: 419819,
        13: 419809,                
    },
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
        13: "The War Ends Here!",
    },
    "hard": {
        0: "[HARD] The Commandos Have Invaded Gorgon!",
        1: "[HARD] The Dimensional Temple Is Under Attack!",
        2: "[HARD] The Flagship of the Gorgonite Fleet Is Under Siege!",
        3: "[HARD] Commando Invaders Are Defiling This Realm!",
        4: "[HARD] The Commandos Are Raiding the Village!",
        5: "[HARD] The Commandos Are Mining Gorgonite Ore!",
        6: "[HARD] The Space Ship Devastator Is a Planet Killer!",
        7: "[HARD] The Commandos Are Testing a Secret Super-Weapon!",
        8: "[HARD] The Commandos Are Fueling Their Weapons of War!",
        9: "[HARD] The Commandos Are Mining for Atomics!",
        10: "[HARD] The Commando Space Fleet Is Preparing To Strike!",
        11: "[HARD] The Commando Home-World Is On the Alert!",
        12: "[HARD] The Commandos Are Manning Their Defenses!",
        13: "[HARD] The War Ends Here!",
    },
    "collectables": {
        0: "Use the Spirit Wells to Traverse This Realm",
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
        0: "Greetings. I am Archer, Emissary of the Gorgonites.",
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

// TODO
Badges = {
    "progression": {
        0: "568850",
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
    },
    "hard": {
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
    },
    "collectables": {
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
}

Points = {
    "progression": [2,2,2,2,2, 2,2,2,2,2, 2,2,2,2],
    "hard": [5,5,5,5,5, 5,5,5,5,5, 5,5,5,5],
    "collectables": [3,3,3,3,3, 3,3,3,3,3, 3,3,3,3],
    "no_death": [5,5,5,5,5, 5,5,5,5,5, 5,5,5,5],
}

// *** DEBUGGING ***
// list of every offset in pointer so we can right click it to jump in memory inspector
function offsets_list() {
    list = true
    for offset in LevelStatsOffsets {
        list = list && byte(LevelStats(offset)) == 0
    }
    return list
}
achievement(
    title = "[VOID]",
    description = "[VOID]",
    id = 419820,
    points = 0,
    trigger = offsets_list()
)

// *** ACHIEVEMENTS ***
for level in LevelLookup {

    progressionType = "progression"
    if (level == length(LevelLookup)-1) {
        progressionType = "win_condition"
    }
    // Progression Any difficulty
    achievement(
        id = IDs["progression"][level],
        title =  Titles["progression"][level],
        badge = Badges["progression"][level],
        points = Points["progression"][level],
        type = progressionType,
        description = "Complete " + LevelLookup[level] + " without using passwords",
        trigger = is_campaign() && level_completed(level)
    )

    // Progression Hard mode
    achievement(
        id = IDs["hard"][level],
        title = Titles["hard"][level],
        points = Points["hard"][level],
        // technically redundant since passwords automatically set difficulty to normal
        description = "Complete " + LevelLookup[level] + " on Hard difficulty",
        trigger = is_campaign() && level_completed(level) && is_hard()
    )

    // Collectables
    achievement(
        id = IDs["collectables"][level],
        title = Titles["collectables"][level],
        points = Points["collectables"][level],
        description = "Collect all secrets and talismans in " + LevelLookup[level],
        trigger = is_scenario() && is_current_level(level) && collected_secrets(level)
    )

    // No-death
    // Note: No-death is always achieved on last level because if you die the boss returns to full health
    /**
    * @deprecated
    */
    /*if(level != length(LevelLookup)-1) {
        achievement(
            title = Titles["no_death"][level],
            points = Points["no_death"][level],
            description = "Complete " + LevelLookup[level] + " without dying",
            trigger = is_scenario() && level_completed(level) && byte(TriesAddress) == 1
        )
    }*/
}

// ***CHALLENGES***


// level 1 gorgon
// kill all enemies
/**
* @deprecated
* DEPRECATED: I'm unable to replicate the condition consistently, sometimes it's 23, sometimes 22,
    and sometimes 24. Maybe because of enemy friendly fire?
*/
/* achievement(
    title = "Beware. There Will Be No Mercy.",
    points = 3, // TODO
    description = "Kill all enemies in " + LevelLookup[0] + " and complete the level",
    trigger = is_scenario() && byte(LevelStats("kills")) == 24 && prev(byte(LevelStats("kills"))) == 23
) */
    
// level 2 dimensional temple
// complete the level without killing any enemy
// TESTED
achievement(
    title = "The Gorgonites Are Peaceful. We Mean No Harm.",
    points = 5,
    description = "Collect all keys in " + LevelLookup[1] + " without killing any enemy",
    trigger = level_challenge(1) && 
        byte(LevelStats("kills")) == 0 &&
        trigger_when(collected_keys(["green_key", "red_key", "yellow_key", "blue_key"])) 
)

// level 3 floating fortress
// disable when shooting with main weapon (cooldown > 0)
// TESTED
achievement(
    title = "Punch It Is Desperate To Hold It!",
    points = 5,
    description = "Reach the turret in " + LevelLookup[2] + " using only Punch It",
    //trigger = is_scenario() && no_shooting() && trigger_when(level_completed(2)) && disable_when(!is_current_screen(LevelScreen[2]) && !is_current_level(2), is_current_screen(LevelScreen[2]) && is_current_level(2))
    //trigger = is_scenario() && level_completed(2) && no_shooting()
    trigger = level_challenge(2) &&
        disable_when(
            comparison = byte(LevelStats("weapon_cooldown")) > 0, // disable when shooting with any crossbow
            until = !is_current_screen(LevelScreen[2])
        ) &&
        disable_when(
            comparison = byte(LevelStats("mines")) < prev(byte(LevelStats("mines"))) && // disable when using mines
                byte(LevelStats("lives")) == prev(byte(LevelStats("lives"))), // check if we didn't die, because when you die you lose everything
            until = !is_current_screen(LevelScreen[2])
        ) &&
        trigger_when(byte(LevelStats("vehicle")) != 0)
)

// level 4 extras:
// TODO

// level 5 extras:
// TODO

// level 6 extras:
// TODO

// level 7 extras:
// TODO

// level 8 extras:
// TODO

// level 9 extras:
// TODO

// level 10 extras:
// TODO

// level 11 extras:
// TODO

// level 12 extras:
// TODO

// level 13 extras:
// TODO

// level 14 extras:    
achievement(
    title = "No Problemo!",
    points = 25, // TODO
    description = "Defeat Chip Hazard in Inner Sanctum without using the turret",
    trigger = level_challenge(13) &&
        disable_when(
            byte(LevelStats("vehicle")) != 0, // disable when mounted on turret
            !is_current_screen(LevelScreen[13])
        ) && // trigger on kill count
        trigger_when(
            byte(LevelStats("kills")) == 1 &&
            prev(byte(LevelStats("kills"))) == 0
        )
)

// stats
// Have every weapon at the same time without using cheats
// TODO
/* achievement(
    title = "TBA",
    points = 10, // TODO
    description = "Have every weapon at the same time without using cheats",
    // TODO
    trigger = is_scenario() &&
        byte(LevelStats("green_ammo")) &&
        byte(LevelStats("blue_ammo"))
        
) */

achievement(
    title = "You Never Have to Replace the Battery",
    points = 5, // TODO
    description = "Have 9 lives on hard difficulty",
    trigger = is_scenario() && 
        is_hard() && 
        (
            ( // during summary screen
                is_current_screen(ScreenLookup["summary"]) && 
                byte(SummaryLivesAddress) == 10 && 
                prev(byte(SummaryLivesAddress)) == 9
            ) ||
            ( // during gameplay
                byte(LevelStats("lives")) == 10 &&
                prev(byte(LevelStats("lives"))) == 9
            )
        )
)

// Easter eggs
achievement(
    title = "An Adventure Through the Heart of Our Most Dangerous Conflict", 
    points = 1, // TODO
    description = "Watch the Medal of Honor promotional video",
    trigger = byte(ModeAddress) == 0 && ascii_string_equals(VideoAddress, "medal.str") && dword(VideoAddress) != prev(dword(VideoAddress))
)

// Rich presence
rich_presence_conditional_display(cheats_enabled(), "Cheats enabled 🏴‍☠️")

rich_presence_conditional_display(is_current_mode(1), "2P mode")

rich_presence_conditional_display(is_current_mode(2), "Watching demo mode")

rich_presence_display("Level: {0} | ❤️: {1} | Difficulty: {2}",
    rich_presence_lookup("Level", byte(LevelAddress), LevelLookup),
    rich_presence_value("Number", byte(LevelStats("lives"))-1),
    rich_presence_lookup("Difficulty", byte(DifficultyAddress), DifficultyLookup)
)

for level in LevelLookup {
    leaderboard(
        title = "Best Time In " + LevelLookup[level],
        description = "Complete " + LevelLookup[level] + " in the fastest time possible on any difficulty",
        start = is_scenario() && is_current_level(level) && is_current_screen(LevelScreen[level]) && !is_previous_screen(LevelScreen[level]),
        cancel = is_current_screen(ScreenLookup["main"]),
        submit = level_completed(level),
        value = dword(Timer) * 2, // 30fps
        format = "FRAMES",
        lower_is_better = true
    )
}
