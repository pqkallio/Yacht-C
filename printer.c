#include "printer.h"
#include "player.h"
#include "points.h"
#include <stdio.h>

void printHeader()
{
    printf("***********\n");
    printf("* YAHTZEE *\n");
    printf("***********\n\n");
}

void printWelcome() 
{
    printf("Welcome!\n\n");
}

void printChooseAmountOfPlayers()
{
    printf("Please choose the amount of players (1-4): ");
}

void printStart()
{
    printHeader();
    printWelcome();
    printChooseAmountOfPlayers();
}

void printReadFault()
{
    printf("Invalid input, please try again!\n");
}

void printGetPlayerName(int i)
{
    printf("Enter a name for Player %d: ", i);
}

void printStats(Player *player)
{
    printf("Name: %s\n", player->name);
}