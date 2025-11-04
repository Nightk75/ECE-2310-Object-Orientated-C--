{
    winner -> setHitsTaken(0);
    live_players. erase(loserIndex)
    winner -> updateExpLevel();
    cout << winner -> getName() << " won against " << loser -> getName();
}

void Game::battleRound()
{
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

end
}