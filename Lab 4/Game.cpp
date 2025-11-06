#include "Game.h"
using namespace std;

Game::Game(){
}

void Game::generatePlayers(int n){
    for(int i = 0; i < n; i++){
        players.push_back(new RPG());

        string new_name = "NPC_" + to_string(i);
        players[i] -> setName(new_name);
        live_players.insert(i);
    }
}

int Game::selectPlayer(){
    random_device rd;
    mt19937 gen(rd()); //seed with random
    uniform_real_distribution<> dis(0, live_players.size() - 1);

    int randomIndex = dist(gen);
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;
}

void Game::endRound(RPG *winner, RPG *loser, int loserIndex){
    winner -> setHitsTaken(0);
    live_players. erase(loserIndex);
    winner -> updateExpLevel();
    cout << winner -> getName() << " won against " << loser -> getName();
}

void Game::battleRound(){
int playerIndex1 = selectPlayer();
int playerIndex2 = selectPlayer();
if(playerIndex1 == playerIndex2){
    battleRound();
    return;
}
RPG* player1 = players[playerIndex1]
RPG* player2 = players[playerIndex2]

while(player1 -> isAlive() & player2 -> isAlive()){
    player1 -> attack(player2)
    player2 -> attack(player1)
}
if(player1 -> isAlive()){
    winner = player1;
} else {
    if(player2 -> isAlive()){
    winner = player2;
    }
}
}

void Game::gameLoop(){
    if(live_players.size() <= 1){
        printFinalResults();
        return;
    }

    while(live_players.size() > 1){
        battleRound();
    }
         printFinalResults();
}


void Game::printFinalResults{
    for(int i = 0; i < players.size(); ++i){
        players[i] -> printStats();
    }
}

Game::~Game(){
}