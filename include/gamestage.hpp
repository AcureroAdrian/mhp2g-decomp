#pragma once

#include "singleton.hpp"
#include "common.h"

struct StageWeight {
    u8 weight;
    u16 stage;
};

struct EmHagiType {
    u16 body_ids[MissionRankId::COUNT];
    u16 tail_ids[MissionRankId::COUNT];
    u16 drop_ids[MissionRankId::COUNT];
    u8 body_count;
    u8 tail_count;
    float radius;
    u16 timer_total;
    bool is_persistent : 1;
    u8 joint_id;
};

struct RegItemSetEX {
    u8 em_type;
    u8 condition;
    s16 indices[6];
};

struct RegItemCondition {
    enum {
        BREAK_0,
        BREAK_1,
        BREAK_2,
        BREAK_3,
        BREAK_4,
        CAPTURE = 0x80,
    };
private:
    RegItemCondition();
};

struct StageWorldCoordinate {
    float x_offset;
    float z_offset;
    float x_min;
    float z_min;
    float x_max;
    float z_max;
    float y_max;
    float y_min;
};

/* hot-air balloon/effect23 */
struct KikyuuDefinition {
    bool present;
    bool enable_fog;
    ScePspRGBA8888 color;
    ScePspFVector4 position;
};

struct MapStageList {
    int length;
    u16 *stages;
};

struct StageBgm {
    u16 bgm;
    u16 volume;
};

struct StageBgmEX {
    u16 stage;
    u16 type;
    u16 bgm;
    u16 volume;
};

struct FightBgm {
    u16 enemy;
    u16 bgm;
};

struct StageBgmEXTransition {
    u8 from;
    u8 to;
    u8 bank;
    u8 tsb;
};

struct StageBgmEXTransitionList {
    u16 stage;
    StageBgmEXTransition *transitions;
};

struct FishWeight {
    s8 weight;
    u8 fish;
};

struct Gamestage : Singleton<Gamestage> {
    ~Gamestage();

    static StageWeight **rand_stage_tbl[];
    static u16 *Hagi_get_tbl[];
    static EmHagiType em_hagi_type_tbl[];
    static u16 *RemItemSetEX_get_tbl[];
    static RegItemSetEX RemItemSetEX_tbl[];
    static StageWorldCoordinate stage_world_tbl[];
    static PositionAngle stage_start_tbl[];
    static KikyuuDefinition stage_kikyuu_tbl[];
    static PositionAngle map_revive_tbl[];
    static MapStageList map_stage_tbl[];
    static u16 map_night_to_day_tbl[];
    static StageBgm Snd_bgm_tbl[];
    static StageBgmEX Snd_bgmEX_tbl[];
    static FightBgm fight_bgm_tbl[];
    static StageBgmEXTransitionList Snd_bgmEX_chg_tbl[];
    static u16 stage_is_night_tbl[];
    static u16 flip_stage_day_night_tbl[];
    static FishWeight tutorial_fish[];

    static inline bool Game_stage_day_ck(u16 stage_id) {
        if (stage_id == StageId::INVALID_ID) {
            return true;
        } else {
            return stage_is_night_tbl[stage_id] == 0;
        }
    }

    static inline u16 Stage_flip_day_night(u16 stage_id) {
        int result;
        if (stage_id == StageId::INVALID_ID) {
            return stage_id;
        }
        int flipped = flip_stage_day_night_tbl[stage_id];
        if (flipped != StageId::INVALID_ID) {
            result = flipped;
        } else {
            result = stage_id;
        }
        return result;
    }

    static inline u16 stage_night_to_day(u16 stage_id) {
        u16 result;
        if (stage_id == StageId::INVALID_ID) {
            return stage_id;
        }
        if (Game_stage_day_ck(stage_id) == true) {
            result = stage_id;
        } else {
            result = Stage_flip_day_night(stage_id);
        }
        return result;
    }

    static inline u16 Map_night_to_day(u16 map_id) {
        u16 result = map_night_to_day_tbl[map_id];
        if (result != 0xFFFF) {
            return result;
        }
        return map_id;
    }
};
