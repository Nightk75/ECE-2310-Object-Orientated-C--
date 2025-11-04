#ifndef Game_h
#define Game_h


class Game{
    public:
        Game();
        void generatePlayers(int n);
    
    private:
        vector<RPG*> players;
        set<int> live_players;
}