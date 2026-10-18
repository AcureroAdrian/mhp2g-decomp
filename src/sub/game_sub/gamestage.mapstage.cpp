#include "gamestage.hpp"

u16 D_game_sub_09CDF420[8] = {
    StageId::POKKE_VILLAGE_ROOM,
    StageId::POKKE_VILLAGE,
    StageId::KITCHEN,
    StageId::FARM,
    StageId::GUILDHALL,
    StageId::FARM_CAVE,
};

u16 D_game_sub_09CDF430[8] = {
    StageId::FORTRESS_BASE,
    StageId::FORTRESS_AREA_1,
    StageId::FORTRESS_AREA_2,
    StageId::FORTRESS_AREA_3,
    StageId::FORTRESS_AREA_4,
    StageId::FORTRESS_AREA_5,
    StageId::FORTRESS_AREA_6,
};

u16 D_game_sub_09CDF440[16] = {
    StageId::FOREST_AND_HILLS_D_BASE,
    StageId::FOREST_AND_HILLS_D_AREA_1,
    StageId::FOREST_AND_HILLS_D_AREA_2,
    StageId::FOREST_AND_HILLS_D_AREA_3,
    StageId::FOREST_AND_HILLS_D_AREA_4,
    StageId::FOREST_AND_HILLS_D_AREA_5,
    StageId::FOREST_AND_HILLS_D_AREA_6,
    StageId::FOREST_AND_HILLS_D_AREA_7,
    StageId::FOREST_AND_HILLS_D_AREA_8,
    StageId::FOREST_AND_HILLS_D_AREA_9,
    StageId::FOREST_AND_HILLS_D_AREA_10,
    StageId::FOREST_AND_HILLS_D_AREA_11,
    StageId::FOREST_AND_HILLS_D_AREA_12,
};

u16 D_game_sub_09CDF460[12] = {
    StageId::DESERT_D_BASE,
    StageId::DESERT_D_AREA_2,
    StageId::DESERT_D_AREA_7,
    StageId::DESERT_D_AREA_3,
    StageId::DESERT_D_AREA_6,
    StageId::DESERT_D_AREA_5,
    StageId::DESERT_D_AREA_1,
    StageId::DESERT_D_AREA_4,
    StageId::DESERT_D_AREA_8,
    StageId::DESERT_D_AREA_9,
    StageId::DESERT_D_AREA_10,
    StageId::DESERT_D_SECRET,
};

u16 D_game_sub_09CDF478[12] = {
    StageId::SWAMP_D_BASE,
    StageId::SWAMP_D_AREA_1,
    StageId::SWAMP_D_AREA_2,
    StageId::SWAMP_D_AREA_3,
    StageId::SWAMP_D_AREA_9,
    StageId::SWAMP_D_AREA_8,
    StageId::SWAMP_D_AREA_6,
    StageId::SWAMP_D_AREA_5,
    StageId::SWAMP_D_AREA_7,
    StageId::SWAMP_D_AREA_4,
    StageId::SWAMP_D_SECRET,
};

u16 D_game_sub_09CDF490[12] = {
    StageId::VOLCANO_D_BASE,
    StageId::VOLCANO_D_AREA_4,
    StageId::VOLCANO_D_AREA_5,
    StageId::VOLCANO_D_AREA_1,
    StageId::VOLCANO_D_AREA_2,
    StageId::VOLCANO_D_AREA_3,
    StageId::VOLCANO_D_AREA_7,
    StageId::VOLCANO_D_AREA_6,
    StageId::VOLCANO_D_AREA_8,
    StageId::VOLCANO_D_SECRET,
    StageId::VOLCANO_D_AREA_9,
    StageId::VOLCANO_D_AREA_10,
};

u16 D_game_sub_09CDF4A8[12] = {
    StageId::JUNGLE_D_BASE,
    StageId::JUNGLE_D_AREA_1,
    StageId::JUNGLE_D_AREA_2,
    StageId::JUNGLE_D_AREA_3,
    StageId::JUNGLE_D_AREA_4,
    StageId::JUNGLE_D_AREA_5,
    StageId::JUNGLE_D_AREA_9,
    StageId::JUNGLE_D_AREA_8,
    StageId::JUNGLE_D_AREA_7,
    StageId::JUNGLE_D_AREA_6,
    StageId::JUNGLE_D_AREA_10,
};

u16 D_game_sub_09CDF4C0[4] = {
    StageId::CASTLE_SCHRADE_BASE,
    StageId::CASTLE_SCHRADE_AREA_2,
};

u16 D_game_sub_09CDF4C8[4] = {
    StageId::OLD_VOLCANO_SECRET,
    StageId::BATTLEGROUND_AREA_1,
};

u16 D_game_sub_09CDF4D0[4] = {
    StageId::ARENA_BASE,
    StageId::ARENA_LARGE,
};

u16 D_game_sub_09CDF4D8[4] = {
    StageId::ARENA_BASE,
    StageId::ARENA_SMALL,
};

u16 D_game_sub_09CDF4E0[12] = {
    StageId::SNOWY_MOUNTAINS_D_BASE,
    StageId::SNOWY_MOUNTAINS_D_AREA_4,
    StageId::SNOWY_MOUNTAINS_D_AREA_5,
    StageId::SNOWY_MOUNTAINS_D_AREA_3,
    StageId::SNOWY_MOUNTAINS_D_AREA_2,
    StageId::SNOWY_MOUNTAINS_D_AREA_7,
    StageId::SNOWY_MOUNTAINS_D_AREA_8,
    StageId::SNOWY_MOUNTAINS_D_AREA_1,
    StageId::SNOWY_MOUNTAINS_D_AREA_6,
    StageId::SNOWY_MOUNTAINS_D_SECRET,
};

u16 D_game_sub_09CDF4F8[4] = {
    StageId::TOWN_D_BASE,
    StageId::TOWN_D_AREA_3,
    StageId::TOWN_D_AREA_1,
    StageId::TOWN_D_AREA_2,
};

u16 D_game_sub_09CDF500[4] = {
    StageId::TOWER_KIRIN_BASE,
    StageId::TOWER_KIRIN_AREA_1,
};

u16 D_game_sub_09CDF508[8] = {
    StageId::TOWER_YAMA_BASE,
    StageId::TOWER_YAMA_AREA_1,
    StageId::TOWER_YAMA_AREA_2,
    StageId::TOWER_YAMA_AREA_6,
    StageId::TOWER_YAMA_AREA_5,
    StageId::TOWER_YAMA_AREA_4,
    StageId::TOWER_YAMA_AREA_3,
    StageId::TOWER_YAMA_AREA_7,
};

u16 D_game_sub_09CDF518[12] = {
    StageId::TOWER_YAMA_BASE,
    StageId::TOWER_YAMA_AREA_1,
    StageId::TOWER_YAMA_AREA_2,
    StageId::TOWER_FATALIS_AREA_10,
    StageId::TOWER_FATALIS_AREA_6,
    StageId::TOWER_YAMA_AREA_6,
    StageId::TOWER_YAMA_AREA_5,
    StageId::TOWER_YAMA_AREA_4,
    StageId::TOWER_YAMA_AREA_3,
    StageId::TOWER_FATALIS_AREA_8,
    StageId::TOWER_FATALIS_AREA_9,
};

u16 D_game_sub_09CDF530[16] = {
    StageId::FOREST_AND_HILLS_N_BASE,
    StageId::FOREST_AND_HILLS_N_AREA_1,
    StageId::FOREST_AND_HILLS_N_AREA_2,
    StageId::FOREST_AND_HILLS_N_AREA_3,
    StageId::FOREST_AND_HILLS_N_AREA_4,
    StageId::FOREST_AND_HILLS_N_AREA_5,
    StageId::FOREST_AND_HILLS_N_AREA_6,
    StageId::FOREST_AND_HILLS_N_AREA_7,
    StageId::FOREST_AND_HILLS_N_AREA_8,
    StageId::FOREST_AND_HILLS_N_AREA_9,
    StageId::FOREST_AND_HILLS_N_AREA_10,
    StageId::FOREST_AND_HILLS_N_AREA_11,
    StageId::FOREST_AND_HILLS_N_AREA_12,
};

u16 D_game_sub_09CDF550[12] = {
    StageId::DESERT_N_BASE,
    StageId::DESERT_N_AREA_2,
    StageId::DESERT_N_AREA_7,
    StageId::DESERT_N_AREA_3,
    StageId::DESERT_N_AREA_6,
    StageId::DESERT_N_AREA_5,
    StageId::DESERT_N_AREA_1,
    StageId::DESERT_N_AREA_4,
    StageId::DESERT_N_AREA_8,
    StageId::DESERT_N_AREA_9,
    StageId::DESERT_N_AREA_10,
    StageId::DESERT_N_SECRET,
};

u16 D_game_sub_09CDF568[12] = {
    StageId::SWAMP_N_BASE,
    StageId::SWAMP_N_AREA_1,
    StageId::SWAMP_N_AREA_2,
    StageId::SWAMP_N_AREA_3,
    StageId::SWAMP_N_AREA_9,
    StageId::SWAMP_N_AREA_8,
    StageId::SWAMP_N_AREA_6,
    StageId::SWAMP_N_AREA_5,
    StageId::SWAMP_N_AREA_7,
    StageId::SWAMP_N_AREA_4,
    StageId::SWAMP_N_SECRET,
};

u16 D_game_sub_09CDF580[12] = {
    StageId::VOLCANO_N_BASE,
    StageId::VOLCANO_N_AREA_4,
    StageId::VOLCANO_N_AREA_5,
    StageId::VOLCANO_N_AREA_1,
    StageId::VOLCANO_N_AREA_2,
    StageId::VOLCANO_N_AREA_3,
    StageId::VOLCANO_N_AREA_7,
    StageId::VOLCANO_N_AREA_6,
    StageId::VOLCANO_D_AREA_8,
    StageId::VOLCANO_N_SECRET,
    StageId::VOLCANO_N_AREA_9,
    StageId::VOLCANO_N_AREA_10,
};

u16 D_game_sub_09CDF598[12] = {
    StageId::JUNGLE_N_BASE,
    StageId::JUNGLE_N_AREA_1,
    StageId::JUNGLE_N_AREA_2,
    StageId::JUNGLE_N_AREA_3,
    StageId::JUNGLE_N_AREA_4,
    StageId::JUNGLE_N_AREA_5,
    StageId::JUNGLE_N_AREA_9,
    StageId::JUNGLE_N_AREA_8,
    StageId::JUNGLE_N_AREA_7,
    StageId::JUNGLE_N_AREA_6,
    StageId::JUNGLE_D_AREA_10,
};

u16 D_game_sub_09CDF5B0[12] = {
    StageId::SNOWY_MOUNTAINS_N_BASE,
    StageId::SNOWY_MOUNTAINS_N_AREA_4,
    StageId::SNOWY_MOUNTAINS_N_AREA_5,
    StageId::SNOWY_MOUNTAINS_N_AREA_3,
    StageId::SNOWY_MOUNTAINS_N_AREA_2,
    StageId::SNOWY_MOUNTAINS_N_AREA_7,
    StageId::SNOWY_MOUNTAINS_N_AREA_8,
    StageId::SNOWY_MOUNTAINS_N_AREA_1,
    StageId::SNOWY_MOUNTAINS_N_AREA_6,
    StageId::SNOWY_MOUNTAINS_N_SECRET,
};

u16 D_game_sub_09CDF5C8[4] = {
    StageId::ARENA_BASE,
    StageId::ARENA_WATER,
};

u16 D_game_sub_09CDF5D0[4] = {
    StageId::SNOWY_MOUNTAINS_PEAK_BASE,
    StageId::SNOWY_MOUNTAINS_PEAK_AREA_1,
};

u16 D_game_sub_09CDF5D8[12] = {
    StageId::OLD_JUNGLE_BASE,
    StageId::OLD_JUNGLE_AREA_1,
    StageId::OLD_JUNGLE_AREA_2,
    StageId::OLD_JUNGLE_AREA_3,
    StageId::OLD_JUNGLE_AREA_4,
    StageId::OLD_JUNGLE_AREA_5,
    StageId::OLD_JUNGLE_AREA_6,
    StageId::OLD_JUNGLE_AREA_7,
    StageId::OLD_JUNGLE_AREA_8,
    StageId::OLD_JUNGLE_AREA_9,
    StageId::OLD_JUNGLE_AREA_10,
};

u16 D_game_sub_09CDF5F0[16] = {
    StageId::OLD_DESERT_BASE,
    StageId::OLD_DESERT_AREA_1,
    StageId::OLD_DESERT_AREA_2,
    StageId::OLD_DESERT_AREA_3,
    StageId::OLD_DESERT_AREA_4,
    StageId::OLD_DESERT_AREA_5,
    StageId::OLD_DESERT_AREA_6,
    StageId::OLD_DESERT_AREA_7,
    StageId::OLD_DESERT_AREA_8,
    StageId::OLD_DESERT_AREA_9,
    StageId::OLD_DESERT_AREA_10,
    StageId::OLD_DESERT_AREA_11,
    StageId::OLD_DESERT_SECRET,
};

u16 D_game_sub_09CDF610[16] = {
    StageId::OLD_SWAMP_BASE,
    StageId::OLD_SWAMP_AREA_1,
    StageId::OLD_SWAMP_AREA_2,
    StageId::OLD_SWAMP_AREA_3,
    StageId::OLD_SWAMP_AREA_4,
    StageId::OLD_SWAMP_AREA_5,
    StageId::OLD_SWAMP_AREA_6,
    StageId::OLD_SWAMP_AREA_7,
    StageId::OLD_SWAMP_AREA_8,
    StageId::OLD_SWAMP_AREA_9,
    StageId::OLD_SWAMP_AREA_10,
    StageId::OLD_SWAMP_AREA_11,
    StageId::OLD_SWAMP_SECRET,
};

u16 D_game_sub_09CDF630[12] = {
    StageId::OLD_VOLCANO_BASE,
    StageId::OLD_VOLCANO_AREA_1,
    StageId::OLD_VOLCANO_AREA_2,
    StageId::OLD_VOLCANO_AREA_3,
    StageId::OLD_VOLCANO_AREA_4,
    StageId::OLD_VOLCANO_AREA_5,
    StageId::OLD_VOLCANO_AREA_6,
    StageId::OLD_VOLCANO_AREA_7,
    StageId::OLD_VOLCANO_AREA_8,
    StageId::OLD_VOLCANO_SECRET,
};

u16 D_game_sub_09CDF648[12] = {
    StageId::GREAT_FOREST_D_BASE,
    StageId::GREAT_FOREST_D_AREA_1,
    StageId::GREAT_FOREST_D_AREA_2,
    StageId::GREAT_FOREST_D_AREA_3,
    StageId::GREAT_FOREST_D_AREA_4,
    StageId::GREAT_FOREST_D_AREA_5,
    StageId::GREAT_FOREST_D_AREA_6,
    StageId::GREAT_FOREST_D_AREA_7,
    StageId::GREAT_FOREST_D_AREA_8,
    StageId::GREAT_FOREST_D_SECRET,
};

u16 D_game_sub_09CDF660[12] = {
    StageId::GREAT_FOREST_N_BASE,
    StageId::GREAT_FOREST_N_AREA_1,
    StageId::GREAT_FOREST_N_AREA_2,
    StageId::GREAT_FOREST_N_AREA_3,
    StageId::GREAT_FOREST_N_AREA_4,
    StageId::GREAT_FOREST_N_AREA_5,
    StageId::GREAT_FOREST_N_AREA_6,
    StageId::GREAT_FOREST_N_AREA_7,
    StageId::GREAT_FOREST_N_AREA_8,
    StageId::GREAT_FOREST_N_SECRET,
};

MapStageList Gamestage::map_stage_tbl[] = {
    [MapId::POKKE_VILLAGE] = {.length = 6, .stages = D_game_sub_09CDF420},
    [MapId::FORTRESS_D] = {.length = 7, .stages = D_game_sub_09CDF430},
    [MapId::FOREST_AND_HILLS_D] = {.length = 13, .stages = D_game_sub_09CDF440},
    [MapId::DESERT_D] = {.length = 12, .stages = D_game_sub_09CDF460},
    [MapId::SWAMP_D] = {.length = 11, .stages = D_game_sub_09CDF478},
    [MapId::VOLCANO_D] = {.length = 12, .stages = D_game_sub_09CDF490},
    [MapId::JUNGLE_D] = {.length = 11, .stages = D_game_sub_09CDF4A8},
    [MapId::CASTLE_SCHRADE] = {.length = 2, .stages = D_game_sub_09CDF4C0},
    [MapId::BATTLEGROUND] = {.length = 2, .stages = D_game_sub_09CDF4C8},
    [MapId::ARENA_LARGE] = {.length = 2, .stages = D_game_sub_09CDF4D0},
    [MapId::ARENA_SMALL] = {.length = 2, .stages = D_game_sub_09CDF4D8},
    [MapId::SNOWY_MOUNTAINS_D] = {.length = 10, .stages = D_game_sub_09CDF4E0},
    [MapId::TOWN_D] = {.length = 4, .stages = D_game_sub_09CDF4F8},
    [MapId::TOWER_KIRIN] = {.length = 2, .stages = D_game_sub_09CDF500},
    [MapId::TOWER_YAMA] = {.length = 8, .stages = D_game_sub_09CDF508},
    [MapId::TOWER_FATALIS] = {.length = 11, .stages = D_game_sub_09CDF518},
    [MapId::FOREST_AND_HILLS_N] = {.length = 13, .stages = D_game_sub_09CDF530},
    [MapId::DESERT_N] = {.length = 12, .stages = D_game_sub_09CDF550},
    [MapId::SWAMP_N] = {.length = 11, .stages = D_game_sub_09CDF568},
    [MapId::VOLCANO_N] = {.length = 12, .stages = D_game_sub_09CDF580},
    [MapId::JUNGLE_N] = {.length = 11, .stages = D_game_sub_09CDF598},
    [MapId::SNOWY_MOUNTAINS_N] = {.length = 10, .stages = D_game_sub_09CDF5B0},
    [MapId::ARENA_WATER] = {.length = 2, .stages = D_game_sub_09CDF5C8},
    [MapId::SNOWY_MOUNTAINS_PEAK] = {.length = 2, .stages = D_game_sub_09CDF5D0},
    [MapId::MISSING_24] = {},
    [MapId::MISSING_25] = {},
    [MapId::OLD_JUNGLE] = {.length = 11, .stages = D_game_sub_09CDF5D8},
    [MapId::OLD_DESERT] = {.length = 13, .stages = D_game_sub_09CDF5F0},
    [MapId::OLD_SWAMP] = {.length = 13, .stages = D_game_sub_09CDF610},
    [MapId::OLD_VOLCANO] = {.length = 10, .stages = D_game_sub_09CDF630},
    [MapId::GREAT_FOREST_D] = {.length = 10, .stages = D_game_sub_09CDF648},
    [MapId::GREAT_FOREST_N] = {.length = 10, .stages = D_game_sub_09CDF660},
};
