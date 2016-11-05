#include <stdlib.h>
#include "game.h"
#include "player.h"
#include "points.h"
#include "yahtzee.h"
#include "printer.h"
#include "reader.h"
#include <string.h>


int getPlayerAmount()
{
    int min = 1;
    int max = 4;
    int amount = readInt(min, max);
    while (amount < min || amount > max) {
        printReadFault();
        amount = readInt(min, max);
    }
    
    return amount;
}

Player *createPlayers(int playerAmount)
{
    Player *players = calloc(sizeof(Player), playerAmount);
    int i;
    while (i < playerAmount) {
        printGetPlayerName(i + 1);
        char *name = readString();
        if (!name || strlen(name) == 0) {
            printReadFault();
        } else {
            players[i].name = name;
            i++;
        }
    }
    
    return players;
}

void tearDownGame(Player *players, int playerAmount) {
    int i;
    for (i = 0; i < playerAmount; i++) {
        free(players[i].name);
    }
    
    free(players);
}

void printPlayerStats(Player *players, int amount)
{
    int i;
    for (i = 0; i < amount; i++) {
        printStats(&players[i]);
    }
}

void startGame()
{
    printStart();
    int playerAmount = getPlayerAmount();
    Player *players = createPlayers(playerAmount);
    printPlayerStats(players, playerAmount);
    tearDownGame(players, playerAmount);
}
