#include <iostream>
#include "RPG.h"
#include <random>
using namespace std;

//constructors
RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}

//overloaded constructor
RPG ::RPG(string name, int hits_taken, float luck, float exp, int level){
this->name = name;
this->hits_taken = hits_taken;
this->luck = luck;
this->exp = exp;
this->level = level;
}

//mutators
void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}

bool RPG::isAlive() const {
    return hits_taken < MAX_HITS_TAKEN;
}

//Accessors
string RPG::getName() const {
    return name;
}

int RPG::getHitsTaken() const {
    return hits_taken;
}

float RPG::getLuck() const {
    return luck;
}

float RPG::getExp() const {
    return exp;
}

int RPG::getLevel() const {
    return level;
}

/*****New Functions*****/
        /**
         * @brief updates name
         * 
         * @param name
         */
        void RPG::setName(string name){
            this-> name = name;
        }

        /**
         * @brief increases RPG's exp by 50, after if exp >= 100.0, 
         *        increase level by 1 and reset exp to 0 and increase luck by 0.1
         */
        void RPG::updateExpLevel(){
            
            exp = exp + 50.0;
            if(exp >= 100.0){
                level = level + 1;
            }
        }

        /**
         * @brief Hit or Misses opponent at random, luck is defense. 
         *        Higher the opponent's luck, more likely an attack will miss.
         *        If attack is a hit, opponent's hits taken should increase by 1.
         * 
         * @param opponent 
         */
        void RPG::attack(RPG*opponent){
            random_device rd;
            mt19937 gen(rd()); //seed with random
            uniform_real_distribution<double> dis(0.0, 1.0);
            float random_num = dis(gen);
            bool hit = random_num > HIT_FACTOR * opponent -> getLuck();
                if(hit){
                    opponent -> int setHitsTaken() + 1;
                }
        }

        /**
         * @brief Prints in format:
         *"Name: NPC_X  Hits Taken: X   Luck: 0.X00000  Exp: X0.000000  Level: X    Status: Alive or Dead"
         */
        void RPG::printStats(){
            cout << " Name:  " << name << " Hits Taken:  " << hits_taken << " Luck:  " << luck 
            << " Exp:  " << exp << " Level:  " << level << " Status:  " << isAlive();
        }

        /**
         * @brief Destroy the RPG::RPG object
         * 
         */
        ~RPG()