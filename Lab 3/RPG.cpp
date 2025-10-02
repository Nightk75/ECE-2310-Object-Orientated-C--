#include <iostream>
#include <string>
#include "RPG.h"
using namespace std;

//constructors
RPG::RPG(){
    name = "NPC"
    hits_taken = 0;
    Luck = 0.1f;
    Exp = 50.0f;
    Level = 1;
}

//overloaded constructor
RPG ::RPG()
