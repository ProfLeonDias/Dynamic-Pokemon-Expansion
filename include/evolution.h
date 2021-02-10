#pragma once

#define MON_MALE       0x00
#define MON_FEMALE     0xFE

struct Evolution
{
    u16 method;
    u16 param;
    u16 targetSpecies;
	u16 unknown; // used for mega evo, Dawn Stone, level in EVO_TYPE_IN_PARTY, or time range in EVO_LEVEL_SPECIFIC_TIME_RANGE
};

enum EvolutionMethods
{
	EVO_NONE = 0,
	EVO_FRIENDSHIP,
	EVO_FRIENDSHIP_DAY,
	EVO_FRIENDSHIP_NIGHT,
	EVO_LEVEL,
	EVO_TRADE,
	EVO_TRADE_ITEM,
	EVO_ITEM,		// for dawn stone, add MON_MALE(0x0) or MON_FEMALE(0xFF) to .unknown in evo table entry
	EVO_LEVEL_ATK_GT_DEF,
	EVO_LEVEL_ATK_EQ_DEF,
	EVO_LEVEL_ATK_LT_DEF,
	EVO_LEVEL_SILCOON,
	EVO_LEVEL_CASCOON,
	EVO_LEVEL_NINJASK,
	EVO_LEVEL_SHEDINJA,
	EVO_BEAUTY,
	// new evolutions
	EVO_RAINY_FOGGY_OW,		// raining or foggy in overworld
	EVO_MOVE_TYPE,	// knows a move with a specific type (eg. sylveon: fairy type move). Param is the move type
	EVO_TYPE_IN_PARTY,	//specific type (param) in party after given level (unknown).
	EVO_MAP, 	// specific map evolution. bank in param, map in unknown
	EVO_MALE_LEVEL,		// above given level if male
	EVO_FEMALE_LEVEL,	// above given level if female	
	EVO_LEVEL_NIGHT,	// above given level at night
	EVO_LEVEL_DAY,		// above given level during day
	EVO_HOLD_ITEM_NIGHT,	// level up holding item at night (eg. sneasel)
	EVO_HOLD_ITEM_DAY,	// level up while holding a specific item during the day (eg. happiny)
	EVO_MOVE,	// knows a given move
	EVO_OTHER_PARTY_MON,	//another poke in the party, arg is a specific species
	EVO_LEVEL_SPECIFIC_TIME_RANGE, // above given level with a range (unknown is [start][end]. eg lycanroc -> 1700-1800 hrs -> 0x1112)
};

#define EVO_GIGANTAMAX 0xFD
#define EVO_MEGA 0xFE

enum MegaEvoVariants
{
	MEGA_VARIANT_STANDARD,
	MEGA_VARIANT_PRIMAL,
	MEGA_VARIANT_WISH, //Rayquaza
	MEGA_VARIANT_ULTRA_BURST, //Necrozma
};

#define MAP_NAME_PALLET_TOWN                  0x58
#define MAP_NAME_VIRIDIAN_CITY                0x59
#define MAP_NAME_PEWTER_CITY                  0x5A
#define MAP_NAME_CERULEAN_CITY                0x5B
#define MAP_NAME_LAVENDER_TOWN                0x5C
#define MAP_NAME_VERMILION_CITY               0x5D
#define MAP_NAME_CELADON_CITY                 0x5E
#define MAP_NAME_FUCHSIA_CITY                 0x5F
#define MAP_NAME_CINNABAR_ISLAND              0x60
#define MAP_NAME_INDIGO_PLATEAU               0x61
#define MAP_NAME_SAFFRON_CITY                 0x62
#define MAP_NAME_ROUTE_4_FLYDUP               0x63
#define MAP_NAME_ROUTE_10_FLYDUP              0x64
#define MAP_NAME_ROUTE_1                      0x65
#define MAP_NAME_ROUTE_2                      0x66
#define MAP_NAME_ROUTE_3                      0x67
#define MAP_NAME_ROUTE_4                      0x68
#define MAP_NAME_ROUTE_5                      0x69
#define MAP_NAME_ROUTE_6                      0x6A
#define MAP_NAME_ROUTE_7                      0x6B
#define MAP_NAME_ROUTE_8                      0x6C
#define MAP_NAME_ROUTE_9                      0x6D
#define MAP_NAME_ROUTE_10                     0x6E
#define MAP_NAME_ROUTE_11                     0x6F
#define MAP_NAME_ROUTE_12                     0x70
#define MAP_NAME_ROUTE_13                     0x71
#define MAP_NAME_ROUTE_14                     0x72
#define MAP_NAME_ROUTE_15                     0x73
#define MAP_NAME_ROUTE_16                     0x74
#define MAP_NAME_ROUTE_17                     0x75
#define MAP_NAME_ROUTE_18                     0x76
#define MAP_NAME_ROUTE_19                     0x77
#define MAP_NAME_ROUTE_20                     0x78
#define MAP_NAME_ROUTE_21                     0x79
#define MAP_NAME_ROUTE_22                     0x7A
#define MAP_NAME_ROUTE_23                     0x7B
#define MAP_NAME_ROUTE_24                     0x7C
#define MAP_NAME_ROUTE_25                     0x7D
#define MAP_NAME_VIRIDIAN_FOREST              0x7E
#define MAP_NAME_MT_MOON                      0x7F
#define MAP_NAME_S_S_ANNE                     0x80
#define MAP_NAME_UNDERGROUND_PATH             0x81
#define MAP_NAME_UNDERGROUND_PATH_2           0x82
#define MAP_NAME_DIGLETTS_CAVE                0x83
#define MAP_NAME_KANTO_VICTORY_ROAD           0x84
#define MAP_NAME_ROCKET_HIDEOUT               0x85
#define MAP_NAME_SILPH_CO                     0x86
#define MAP_NAME_POKEMON_MANSION              0x87
#define MAP_NAME_KANTO_SAFARI_ZONE            0x88
#define MAP_NAME_POKEMON_LEAGUE               0x89
#define MAP_NAME_ROCK_TUNNEL                  0x8A
#define MAP_NAME_SEAFOAM_ISLANDS              0x8B
#define MAP_NAME_POKEMON_TOWER                0x8C
#define MAP_NAME_CERULEAN_CAVE                0x8D
#define MAP_NAME_POWER_PLANT                  0x8E
#define MAP_NAME_ONE_ISLAND                   0x8F
#define MAP_NAME_TWO_ISLAND                   0x90
#define MAP_NAME_THREE_ISLAND                 0x91
#define MAP_NAME_FOUR_ISLAND                  0x92
#define MAP_NAME_FIVE_ISLAND                  0x93
#define MAP_NAME_SEVEN_ISLAND                 0x94
#define MAP_NAME_SIX_ISLAND                   0x95
#define MAP_NAME_KINDLE_ROAD                  0x96
#define MAP_NAME_TREASURE_BEACH               0x97
#define MAP_NAME_CAPE_BRINK                   0x98
#define MAP_NAME_BOND_BRIDGE                  0x99
#define MAP_NAME_THREE_ISLE_PORT              0x9A
#define MAP_NAME_SEVII_ISLE_6                 0x9B
#define MAP_NAME_SEVII_ISLE_7                 0x9C
#define MAP_NAME_SEVII_ISLE_8                 0x9D
#define MAP_NAME_SEVII_ISLE_9                 0x9E
#define MAP_NAME_RESORT_GORGEOUS              0x9F
#define MAP_NAME_WATER_LABYRINTH              0xA0
#define MAP_NAME_FIVE_ISLE_MEADOW             0xA1
#define MAP_NAME_MEMORIAL_PILLAR              0xA2
#define MAP_NAME_OUTCAST_ISLAND               0xA3
#define MAP_NAME_GREEN_PATH                   0xA4
#define MAP_NAME_WATER_PATH                   0xA5
#define MAP_NAME_RUIN_VALLEY                  0xA6
#define MAP_NAME_TRAINER_TOWER                0xA7
#define MAP_NAME_CANYON_ENTRANCE              0xA8
#define MAP_NAME_SEVAULT_CANYON               0xA9
#define MAP_NAME_TANOBY_RUINS                 0xAA
#define MAP_NAME_SEVII_ISLE_22                0xAB
#define MAP_NAME_SEVII_ISLE_23                0xAC
#define MAP_NAME_SEVII_ISLE_24                0xAD
#define MAP_NAME_NAVEL_ROCK                   0xAE
#define MAP_NAME_MT_EMBER                     0xAF
#define MAP_NAME_BERRY_FOREST                 0xB0
#define MAP_NAME_ICEFALL_CAVE                 0xB1
#define MAP_NAME_ROCKET_WAREHOUSE             0xB2
#define MAP_NAME_TRAINER_TOWER_2              0xB3
#define MAP_NAME_DOTTED_HOLE                  0xB4
#define MAP_NAME_LOST_CAVE                    0xB5
#define MAP_NAME_PATTERN_BUSH                 0xB6
#define MAP_NAME_ALTERING_CAVE                0xB7
#define MAP_NAME_TANOBY_CHAMBERS              0xB8
#define MAP_NAME_THREE_ISLE_PATH              0xB9
#define MAP_NAME_TANOBY_KEY                   0xBA
#define MAP_NAME_MT_SILVER                    0xBB
#define MAP_NAME_MONEAN_CHAMBER               0xBC
#define MAP_NAME_LIPTOO_CHAMBER               0xBD
#define MAP_NAME_WEEPTH_CHAMBER               0xBE
#define MAP_NAME_DILFORD_CHAMBER              0xBF
#define MAP_NAME_SCUFIB_CHAMBER               0xC0
#define MAP_NAME_RIXY_CHAMBER                 0xC1
#define MAP_NAME_VIAPOIS_CHAMBER              0xC2
#define MAP_NAME_EMBER_SPA                    0xC3
