#pragma once

#include "player.hpp"
#include "singleton.hpp"

struct PlayerManager : Singleton<PlayerManager> {
    // TODO

    Player *getPlayerPtr(int playerId);

    PlayerManager();
};
