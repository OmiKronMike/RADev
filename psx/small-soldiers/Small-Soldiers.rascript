// Small Soldiers
// #ID = 18564

//****************************
// * ADDRESSES
//****************************

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

// Summary
SummaryLivesAddress = 0x0393ce
SummaryKillsAddress = 0x0393dc
SummarySecretsAddress = 0x0393e1
SummarySecretsTotalAddress = 0x0393e2
TriesAddress = 0x0393e3

// Mode
ModeAddress = 0x0393C4
ModeLookup = {
    "campaign": 0,
    "2p": 1,
    "demo": 2
}
MultiPlayerModeAddress = 0x0393cb
MultiPlayerModeLookup = {
    "frag": 0,
    "flag": 1
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

MultiplayerLevelAddress = 0x0393ca
MultiplayerLevelLookup = {
    1: "Dimensional Temple",
    2: "Creepy Caverns",
    3: "Spirit Bog",
    4: "Hall of Patriots",
    5: "Nuclear Mine",
    6: "Garrison Prime"
}
function is_current_multiplayer_level(level) {
    return byte(MultiplayerLevelAddress) == level
}
function is_previous_multiplayer_level(level) {
    return prev(byte(MultiplayerLevelAddress)) == level
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
    13: [2,0],
}
LevelSecretsLookup = {}
LevelTalismansLookup = {}
for level in LevelSecrets {
    LevelSecretsLookup[level] = "" + LevelSecrets[level][0]
    LevelTalismansLookup[level] = "" + LevelSecrets[level][1]
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
    "player_data": 0x00d8, // 24-bit pointer
    "lives": 0x02e4, //8-bit
    "kills": 0x0388, //8-bit
    "weapon_cooldown": 0x03a0, //8-bit
    "equipped_weapon": 0x03a4, //8-bit index
    "green_ammo": 0x03ac, //8-bit
    "blue_ammo": 0x03ae, //8-bit
    "equipped_secondary": 0x03ce, //8-bit index
    "secrets": 0x03d0, //8-bit
    "talismans": 0x03d2, //8-bit
}

// +0x03d4 | [8-bit] secondary weapon slot 1
// 0x18 = Orb (grenades)
// 0x19 = Spirit Bomb (mines)
// 0x1a = Earth Shaker (nuke)
// 0x36 = Insaniac
// 0x37 = Nibble
// 0x38 = Ocula
// 0x39 = Punch-it
// 0x3a = Scratch-it
// 0x3b = Slamfist
// 0x3c = Stench
// +0x03d6 | [8-bit] secondary weapon slot 1 ammo
// +0x03d8 | [8-bit] secondary weapon slot 2
// 0x00 see slot 1
// +0x03da | [8-bit] secondary weapon slot 2 ammo
// +0x03dc | [8-bit] secondary weapon slot 3
// 0x00 see slot 1
// +0x03de | [8-bit] secondary weapon slot 3 ammo
// +0x03e0 | [8-bit] secondary weapon slot 4
// 0x00 see slot 1
// +0x03e2 | [8-bit] secondary weapon slot 4 ammo
// +0x03e4 | [8-bit] secondary weapon slot 5
// 0x00 see slot 1
// +0x03e6 | [8-bit] secondary weapon slot 5 ammo
// +0x03e8 | [8-bit] secondary weapon slot 6
// 0x00 see slot 1
// +0x03ea | [8-bit] secondary weapon slot 6 ammo
SecondaryWeaponOffsets = {}
for i in range(0, 5){
    SecondaryWeaponOffsets[i] = {
        "id": 0x03d4 + (i * 4), //8-bit
        "ammo": 0x03d6 + (i * 4), //8-bit
    }
}
SecondaryWeaponIds = {
    "orb": 0x18,
    "spirit_bomb": 0x19,
    "earth_shaker": 0x1a,
    "insaniac": 0x36,
    "nibble": 0x37,
    "ocula": 0x38,
    "punch_it": 0x39,
    "scratch_it": 0x3a,
    "slamfist": 0x3b,
    "stench": 0x3c,
}

PlayerDataOffsets = {
    "jump": 0x03d9, //8-bit
}

function LevelStats(stat) {
    return tbyte(LevelStatsPointer) + LevelStatsOffsets[stat]
}
function SecondaryWeaponData(weapon, data) {
    return tbyte(LevelStatsPointer) + SecondaryWeaponOffsets[weapon][data]
}
function EquippedSecondaryWeaponId() {
    return tbyte(LevelStatsPointer) + SecondaryWeaponOffsets[0]["id"] + byte(LevelStats("equipped_secondary")) * 4
}
function EquippedSecondaryWeaponAmmo() {
    return tbyte(LevelStatsPointer) + SecondaryWeaponOffsets[0]["ammo"] + byte(LevelStats("equipped_secondary")) * 4
}
function PlayerData(stat) {
    return tbyte(LevelStats("player_data")) + PlayerDataOffsets[stat]
}

// Screen
ScreenAddress = 0x03af30
ScreenLookup = {
    "main": 0x40019,
    "2p": 0x15518,
    "load": 0x124718,
    "password": 0x315218,
    "options_main": 0x265018,
    "options_controller": 0x274018,
    "options_analog": 0x443818,
    "options_sound": 0x595818,
    "credits": 0x565702,
    "summary": 0x554118,
    "archer_victory": 0x173719,
    "chip_victory": 0x103919
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

/*[128-bit] ASCII Title of video currently played
- ea_logo.str (initial loading)
- m_final.str (initial loading)
- m_intro.str (campaign intro video)
- end.str (after final boss)
- credits.str (credits, both endgame and from options)
- medal.str (Medal of Honor promotional video)*/
VideoAddress = 0x1FFE79

// ****************************
// * FUNCTIONS
// ****************************

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
function is_level_screen() {
    condition = false
    for screen in LevelScreen {
        condition = condition || is_current_screen(LevelScreen[screen])
    }
    return condition
}

function is_1P() => byte(ModeAddress) == ModeLookup["campaign"]
function is_2p_frag() => byte(ModeAddress) == ModeLookup["2p"] && byte(MultiPlayerModeAddress) == MultiPlayerModeLookup["frag"]
function is_2p_flag() => byte(ModeAddress) == ModeLookup["2p"] && byte(MultiPlayerModeAddress) == MultiPlayerModeLookup["flag"]
function is_hard() => byte(DifficultyAddress) == 2
function has_level_changed() => byte(LevelAddress) != prev(byte(LevelAddress))
function no_passwords() => disable_when(is_current_screen(ScreenLookup["password"]) && has_level_changed(), is_current_screen(ScreenLookup["main"]))
function no_cheats() => byte(CheatInvincibilityAddress) == 0 && byte(CheatAllWeaponsAddress) == 0 && byte(CheatUnlimitedAmmoAddress) == 0
function cheats_enabled() => byte(CheatInvincibilityAddress) == 1 || byte(CheatAllWeaponsAddress) == 1 || byte(CheatUnlimitedAmmoAddress) == 1
function is_scenario() => is_1P() && no_cheats()
function is_campaign() => is_1P() && no_cheats() && no_passwords()

function is_playing_video(video) => ascii_string_equals(VideoAddress, video)

function last_level_completed() {
    return 
        is_1P() && no_passwords() && no_cheats() &&
        is_current_level(length(LevelLookup)-1) &&
        //last level doesn't have a summary screen, so we check if the end video is playing    
        is_playing_video("end.str") &&
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

//****************************
// * SET DATA
//****************************

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

//********************
// * DEBUG UTILS
//********************

// list of every offset in pointer so we can right click it to jump in memory inspector
function offsets_list() {
    list = true
    for offset in LevelStatsOffsets {
        list = list && byte(LevelStats(offset)) == 0
    }
    return list
}
achievement(
    title = "[DEBUG] level stats",
    description = "Level stats",
    points = 0,
    trigger = offsets_list() && 
    byte(ModeAddress) > 2 // should always be false
)
function secondary_weapons_list() {
    list = true
    for weapon in SecondaryWeaponOffsets {
        list = list && byte(SecondaryWeaponData(weapon, "id")) == 0 && byte(SecondaryWeaponData(weapon, "ammo")) == 0
    }
    return list
}
achievement(
    title = "[DEBUG] secondary weapons",
    description = "Secondary weapons",
    points = 0,
    trigger = secondary_weapons_list() &&
    byte(ModeAddress) > 2 // should always be false
)

//********************
// * PROGRESSION ACHIEVEMENTS
//********************

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
}

//*********************
// * CHALLENGE ACHIEVEMENTS
//*********************

// level 1 gorgon id 420127
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
// level 1 gorgon
achievement(
    title = "[TBD] Gorgon challenge",
    id = 420127,
    points = 5,
    description = "TBD",
    trigger = level_challenge(0)
)
    
// level 2 dimensional temple
// complete the level without killing any enemy
// *TESTED
achievement(
    title = "The Gorgonites Are Peaceful. We Mean No Harm.",
    id = 420128,
    points = 5,
    description = "Collect all keys in " + LevelLookup[1] + " without killing any enemies",
    trigger = level_challenge(1) && 
        byte(LevelStats("kills")) == 0 &&
        trigger_when(collected_keys(["green_key", "red_key", "yellow_key", "blue_key"])) 
)

// level 3 floating fortress
// disable when shooting with main weapon (cooldown > 0)
// TESTED
achievement(
    title = "Punch It Is Desperate To Hold It!",
    id = 420129,
    points = 5,
    description = "Reach the turret in " + LevelLookup[2] + " using only Punch It",
    //trigger = is_scenario() && no_shooting() && trigger_when(level_completed(2)) && disable_when(!is_current_screen(LevelScreen[2]) && !is_current_level(2), is_current_screen(LevelScreen[2]) && is_current_level(2))
    //trigger = is_scenario() && level_completed(2) && no_shooting()
    trigger = level_challenge(2) &&
        disable_when(
            comparison = byte(LevelStats("weapon_cooldown")) > 0, // disable when using any primary weapon
            until = !is_current_screen(LevelScreen[2])
        ) &&
        disable_when(
            comparison =
                (byte(EquippedSecondaryWeaponId()) != SecondaryWeaponIds["punch_it"] && // disable when using any other secondary weapon
                // ! fix when 1 ammo left, because as soon as it gets to 0, equipped id changes
                byte(EquippedSecondaryWeaponAmmo()) < prev(byte(EquippedSecondaryWeaponAmmo()))), //&&
                //byte(LevelStats("lives")) == prev(byte(LevelStats("lives"))), // check if we didn't die, because when you die you lose everything in hard mode
            until = !is_current_screen(LevelScreen[2])
        ) &&
        /*
        ! it's triggering at the start of the level because it's not 0. 
        ! Probably a pointer to the teleporter from where you start
        */
        trigger_when(byte(LevelStats("vehicle")) != 0)
)

// level 4 spirit bog
// TODO 420130
achievement(
    title = "[TBD] Spirit Bog challenge",
    id = 420130,
    points = 5, // TODO
    description = "TBD",
    trigger = level_challenge(3)
)

// level 5 canyon village
// collect every key without jumping
achievement(
    title = "Jump",
    id = 420131,
    points = 5, // TODO
    description = "Collect all keys in " + LevelLookup[4] + " without jumping",
    trigger = level_challenge(4) && 
        trigger_when(collected_keys(["green_key", "red_key", "yellow_key"])) &&
        disable_when(byte(PlayerData("jump")) != 0, !is_current_screen(LevelScreen[4]))
)

// level 6 creepy caverns
// TODO 420132
achievement(
    title = "[TBD] Creepy Caverns challenge",
    id = 420132,
    points = 5, // TODO
    description = "TBD",
    trigger = level_challenge(5)
)
// level 7 space ship
// TODO 420133
achievement(
    title = "[TBD] Space Ship challenge",
    id = 420133,
    points = 5, // TODO
    description = "TBD",
    trigger = level_challenge(6)
)
// level 8 hall of patriots
// TODO 420134
// kill 100 enemies using walker or turret
achievement(
    title = "Commandos Are Everywhere!",
    id = 420134,
    points = 5, // TODO
    description = "Kill 100 enemies using the turret or walker in a single session in " + LevelLookup[7],
    trigger = level_challenge(7) &&
        measured(
            comparison = tally(
                    3, // TODO choose a good value
                    byte(LevelStats("kills")) == prev(byte(LevelStats("kills"))) + 1 && 
                    byte(LevelStats("vehicle")) != 0 // add hits only when kill count increase while mounted
                ), // reset when leaving the level
            when = level_challenge(7)
        )
)
// level 9 graveyard of war
// TODO 420135
achievement(
    title = "[TBD] Graveyard of War challenge",
    id = 420135,
    points = 5, // TODO
    description = "TBD",
    trigger = level_challenge(8)
)
// level 10 nuclear mine
// TODO 420136
achievement(
    title = "[TBD] Nuclear Mine challenge",
    id = 420136,
    points = 5, // TODO
    description = "TBD",
    trigger = level_challenge(9)
)
// level 11 launch center
// TODO 420137
achievement(
    title = "[TBD] Launch Center challenge",
    id = 420137,
    points = 5, // TODO
    description = "TBD",
    trigger = level_challenge(10)
)
// level 12 ulhaden fier
// TODO 420138
achievement(
    title = "[TBD] Ulhaden Fier challenge",
    id = 420138,
    points = 5, // TODO
    description = "TBD",
    trigger = level_challenge(11)
)

// level 13 garrison prime
// TODO 420139
achievement(
    title = "[TBD] Garrison Prime challenge",
    id = 420139,
    points = 5, // TODO
    description = "TBD",
    trigger = level_challenge(12)
)

// level 14 inner sanctum
achievement(
    title = "No Problemo!",
    id = 420140,
    points = 25, // TODO
    description = "Defeat Chip Hazard in Inner Sanctum without using the turret",
    trigger = level_challenge(13) &&
        disable_when(
            byte(LevelStats("vehicle")) != 0, // disable when mounted on turret
            !is_current_screen(LevelScreen[13])
        ) && // trigger on kill count
        trigger_when(
            byte(LevelStats("kills")) == prev(byte(LevelStats("kills"))) + 1
        )
)

//*********************
// * MISC ACHIEVEMENTS
//*********************

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

// win as Chip Hazard in 2p mode
achievement(
    title = "Featuring Tommy Lee Jones",
    id = 420141,
    points = 5, // TODO
    description = "Win as Chip Hazard in 2 Players frag mode in any level",
    trigger = is_2p_frag() &&
        is_current_screen(ScreenLookup["chip_victory"]) &&
        !is_previous_screen(ScreenLookup["chip_victory"])
)

// win as Chip Hazard in flag mode in every level
for level in MultiplayerLevelLookup {
    achievement(
        title = "Mission Accomplished! " + MultiplayerLevelLookup[level], // TODO
        points = 1,
        description = "Win as Chip Hazard in 2 Players flag mode in " + MultiplayerLevelLookup[level],
        trigger = is_2p_flag() &&
            is_current_screen(ScreenLookup["chip_victory"]) &&
            !is_previous_screen(ScreenLookup["chip_victory"]) &&
            is_current_multiplayer_level(level)
    )
}

achievement(
    title = "An Adventure Through the Heart of Our Most Dangerous Conflict", 
    id = 419685,
    points = 1, // TODO
    description = "Watch the Medal of Honor promotional video",
    trigger = is_playing_video("medal.str") && dword(VideoAddress) != prev(dword(VideoAddress))
)

//*********************
// * LEADERBOARDS
//*********************

for level in LevelLookup {
    leaderboard(
        title = "Best Time In " + LevelLookup[level],
        description = "Complete " + LevelLookup[level] + " in the fastest time possible on any difficulty",
        start = is_scenario() && 
            is_current_level(level) && 
            is_current_screen(LevelScreen[level]) && 
            !is_previous_screen(LevelScreen[level]),
        cancel = is_current_screen(ScreenLookup["main"]),
        submit = level_completed(level),
        value = dword(Timer) * 2, // 30fps
        format = "FRAMES",
        lower_is_better = true
    )
}


//*********************
// * RICH PRESENCE
//*********************

rich_presence_conditional_display(cheats_enabled(), "Cheats enabled 🏴‍☠️")

rich_presence_conditional_display(
    is_current_screen(ScreenLookup["main"]) ||
    is_current_screen(ScreenLookup["2p"]) ||
    is_current_screen(ScreenLookup["password"]) ||
    is_current_screen(ScreenLookup["options_main"]) ||
    is_current_screen(ScreenLookup["options_controller"]) ||
    is_current_screen(ScreenLookup["options_analog"]) ||
    is_current_screen(ScreenLookup["options_sound"]),
    "Navigating menus"
)

rich_presence_conditional_display(
    is_playing_video("m_intro.str"),
    "Watching intro video"
)
rich_presence_conditional_display(
    is_playing_video("end.str"),
    "Watching end video"
)
rich_presence_conditional_display(
    is_playing_video("credits.str"),
    "Watching credits video"
)

rich_presence_conditional_display(
    byte(ModeAddress) == ModeLookup["2p"] && 
    byte(MultiPlayerModeAddress) == MultiPlayerModeLookup["frag"], 
    "2 Players frag mode 💥"
)
rich_presence_conditional_display(
    byte(ModeAddress) == ModeLookup["2p"] && 
    byte(MultiPlayerModeAddress) == MultiPlayerModeLookup["flag"], 
    "2 Players flag mode 🎌"
)

rich_presence_conditional_display(byte(ModeAddress) == ModeLookup["demo"], "Watching demo mode")

rich_presence_conditional_display(
    is_level_screen(),
    "Playing | 🚩: {1} - {0} | ❤️: {2} | ⚙️: {3} | ☠️: {4} | 🏆: {5}/{6} | 🔎: {7}/{8}",
    rich_presence_lookup("Level", byte(LevelAddress), LevelLookup),
    rich_presence_value("Number", byte(LevelAddress)+1),
    rich_presence_value("Number", byte(LevelStats("lives"))-1),
    rich_presence_lookup("Difficulty", byte(DifficultyAddress), DifficultyLookup),
    rich_presence_value("Number", byte(LevelStats("kills"))),
    rich_presence_value("Number", byte(LevelStats("talismans"))),
    rich_presence_lookup("Talismans", byte(LevelAddress), LevelTalismansLookup),
    rich_presence_value("Number", byte(LevelStats("secrets"))),
    rich_presence_lookup("Secrets", byte(LevelAddress), LevelSecretsLookup)
)

//summary screen
rich_presence_conditional_display(
    is_current_screen(ScreenLookup["summary"]),
    "Quest Complete! | 🚩: {1} - {0} | ❤️: {2} | ⚙️ {3} | ☠️: {4} | 🔁: {5} | 🏆: {6}/{7} | 🔎: {7}/{8}",
    rich_presence_lookup("Level", byte(LevelAddress)-1, LevelLookup),
    rich_presence_value("Number", byte(LevelAddress)),
    rich_presence_value("Number", byte(SummaryLivesAddress)-1),
    rich_presence_lookup("Difficulty", byte(DifficultyAddress), DifficultyLookup),
    rich_presence_value("Number", byte(SummaryKillsAddress)),
    rich_presence_value("Number", byte(TriesAddress)),
    rich_presence_value("Number", byte(LevelStats("talismans"))),
    rich_presence_value("Number", byte(SummarySecretsAddress)),
    rich_presence_value("Number", byte(SummarySecretsTotalAddress))
)

rich_presence_display("Loading...")

