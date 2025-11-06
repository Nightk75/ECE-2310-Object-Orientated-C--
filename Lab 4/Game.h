#ifndef Game_h
#define Game_h
#include "RPG.h"
#include <vector>
#include <set>
#include <string>

class Game{
    public:
        Game();
        void generatePlayers(int n);
        int selectPlayer();
        void endRound(RPG* winner, RPG* loser, int loserIndex);
        void battleRound();
        void gameLoop();
        void printFinalResults();
        ~Game();

    private:
        std::vector<RPG*> players;
        std::set<int> live_players;
};
#endif