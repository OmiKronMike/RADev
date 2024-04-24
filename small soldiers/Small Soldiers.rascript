// Small Soldiers
// #ID = 18564

// Difficulty
DifficultyAddress = 0x0393C5
DifficultyLookup = {
    0: "Easy",
    1: "Normal",
    2: "Hard",
}

MusicVolumeAddress = 0x0393C6 //0x7f = Max
MusicStatusAddress = 0x0393C7 //0 = Stereo, 1 = Mono, 2 = Off

// Cheats
CheatInvincibilityAddress = 0x0393d8
CheatAllWeaponsAddress = 0x0393d9
CheatUnlimitedAmmoAddress = 0x0393da

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

LevelStatsPointer = 0x0A1D1C
LevelStatsOffsets = {
    "vehicle": 0x2c, //24-bit pointer
    "lives": 0x02e4,
    "kills": 0x0388,
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
    //levels
    1: 0x823,
    2: 0x4819
}

VideoAddress = 0x1FFE79

function is_current_screen(screen) {
    return dword(ScreenAddress) == ScreenLookup[screen]
}
IS_SCREEN = any_of(ScreenLookup, is_current_screen)

IS_1P = byte(ModeAddress) == 0
IS_HARD = byte(DifficultyAddress) == 2
LEVEL_CHANGED = byte(LevelAddress) != prev(byte(LevelAddress))
LEVEL_PROGRESS = byte(LevelAddress) == prev(byte(LevelAddress)+1)
NO_PASSWORDS = disable_when(is_current_screen("password") && LEVEL_CHANGED, is_current_screen("main"))
NO_CHEATS = byte(CheatInvincibilityAddress) == 0 && byte(CheatAllWeaponsAddress) == 0 && byte(CheatUnlimitedAmmoAddress) == 0

function last_level_completed() {
    return 
        IS_1P && NO_PASSWORDS && NO_CHEATS &&
        is_current_level(length(LevelLookup)-1) && 
        ascii_string_equals(VideoAddress, "end.str") //last level doesn't have a summary screen
}

function level_completed(level) {
    if (level == length(LevelLookup)-1) {
        return last_level_completed()
    }
    return 
        IS_1P && NO_PASSWORDS && NO_CHEATS &&
        LEVEL_PROGRESS && is_current_level(level+1) && is_current_screen("summary")
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
        IS_1P && NO_CHEATS && is_current_level(level) && 
        current_total_secrets == target_secrets &&
        prev_total_secrets == target_secrets - 1
}

// AchievementsIds = {
//     "progression": [419778, 419779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
//     "hard": [419799, 0, 0, 0, ],
//     "collectables": [419792, 0, 0, 0],
//     "no_death": [0, 0, 0, 0],
//     "challenge": [0, 0, 0, 0]
// }

// function get_id(type, level) {
//     if (level >= length(AchievementsIds[type])) {
//         return 0
//     }
//     return AchievementsIds[type][level]
// }

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
        0: "TODO 0",
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
        13: "TODO 13",
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
        description = "Complete " + LevelLookup[level] + " on any difficulty (no passwords)",
        trigger = level_completed(level)
    )

    // Progression Hard mode
    achievement(
        title = Titles["progression"][level] + " [Hard]",
        points = Points["hard"][level],
        // technically redundant since passwords automatically set difficulty to normal
        description = "Complete " + LevelLookup[level] + " on Hard difficulty (no passwords)",
        trigger = level_completed(level) && IS_HARD
    )

    // Collectables
    achievement(
        title = Titles["collectables"][level],
        points = Points["collectables"][level],
        description = "Collect all secrets and talismans in " + LevelLookup[level],
        trigger = collected_secrets(level)
    )

    // No-death
    // TODO: allow passwords?
    // Note: No-death is always achieved on last level because if you die the boss returns to full health
    if(level != length(LevelLookup)-1) {
        achievement(
            title = Titles["no_death"][level],
            points = Points["no_death"][level],
            description = "Complete " + LevelLookup[level] + " without dying",
            trigger = level_completed(level) && byte(TriesAddress) == 1
        )
    }
}

// Level challenges
    // level 1: 
    // TODO
    // something about insaniac
    // speedrun
    
    // level 2:
    // complete the level without killing any enemies
achievement(
    title = "The Gorgonites are peaceful. We mean no harm.",
    points = 3,
    description = "Complete Dimensional Temple without killing any enemies",
    trigger = level_completed(1) && byte(LevelStats("kills")) == 0
)

    // level 3:
    // TODO
    // something about smash-it?

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

boss_restored = byte(LevelStats("vehicle")) == 0 // TODO
no_turret = disable_when(byte(LevelStats("vehicle")) != 0, boss_restored)
achievement(
    title = "No Problemo!",
    points = 25, // TODO
    description = "Defeat Chip Hazard without using the turret",
    //trigger = level_completed(13) && byte(LevelStats("vehicle")) == 0 // TODO it's not enough, you could have used the turret before
    //todo
    trigger = IS_1P && NO_CHEATS && is_current_level(13) 
        && no_turret && byte(LevelStats("kills")) == 1 && prev(byte(LevelStats("kills"))) == 0
)

// Easter eggs
achievement(
    title = "An Adventure Through the Heart of Our Most Dangerous Conflict", 
    points = 1, // TODO
    description = "Watch the Medal of Honor promotional video",
    trigger = byte(ModeAddress) == 0 && ascii_string_equals(VideoAddress, "medal.str")
)

// discarded
// achievement(
//     title = "There's no need to go that hard" // TODO
//     points = 1, // TODO
//     description = "Set the music volume to maximum",
//     trigger = byte(MusicVolumeAddress) == 0x7f && byte(MusicStatusAddress) != 2 && byte(MusicVolumeAddress) > prev(byte(MusicVolumeAddress))
// )

// Rich presence
rich_presence_conditional_display(!NO_CHEATS, "Cheats enabled 🏴‍☠️")

rich_presence_conditional_display(is_current_mode(1), "2P mode")

rich_presence_conditional_display(is_current_mode(2), "Demo mode")

rich_presence_conditional_display(IS_SCREEN, "In menu")

rich_presence_display("Level: {0} | ❤️: {1} | Difficulty: {2}",
    rich_presence_lookup("Level", byte(LevelAddress), LevelLookup),
    rich_presence_value("Number", byte(LevelStats("lives"))),
    rich_presence_lookup("Difficulty", byte(DifficultyAddress), DifficultyLookup)
)
