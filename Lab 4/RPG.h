#ifndef RPG_H
#define RPG_
#include <string>
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;
class RPG {
    public:
        //constructors
        RPG();
        RPG(string name, int hits_taken, float luck, float exp, int level);

        //mutators
        bool isAlive() const;
        void setHitsTaken(int new_hits);

        //accessors
        string getName() const;
        int getHitsTaken() const;
        float getLuck() const;
        float getExp() const; 
        int getLevel() const;

        /*****New Functions*****/
        /**
         * @brief updates name
         * 
         * @param name
         */
        void setName(string name);

        /**
         * @brief increases RPG's exp by 50, after if exp >= 100.0, 
         *        increase level by 1 and reset exp to 0 and increase luck by 0.1
         */
        void updateExpLevel();

        /**
         * @brief Hit or Misses opponent at random, luck is defense. 
         *        Higher the opponent's luck, more likely an attack will miss.
         *        If attack is a hit, opponent's hits taken should increase by 1.
         * 
         * @param opponent 
         */
        void attack(RPG*opponent);

        /**
         * @brief Prints in format:
         *"Name: NPC_X  Hits Taken: X   Luck: 0.X00000  Exp: X0.000000  Level: X    Status: Alive or Dead"
         */
        void printStats();

        /**
         * @brief Destroy the RPG::RPG object
         * 
         */
        ~RPG();


    private:
        string name;
        int hits_taken;
        float luck;
        float exp;
        int level;
};       
#endif