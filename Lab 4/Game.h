#ifndef Game_h
#define Game_h
#include "RPG.h"


class Game{
    public:
        Game();
        void generatePlayers(int n);
        int selectPlayer();
        void endRound(winner: RPG*, loser: RPG*, loserIndex: int)
        void battleRound()
        void gameLoop()
        void printFinalResults()
        ~Game()

    private:
        vector<RPG*> players;
        set<int> live_players;
}