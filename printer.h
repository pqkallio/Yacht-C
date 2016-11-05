/* 
 * File:   printer.h
 * Author: Petri Kallio
 *
 * Created on November 5, 2016, 11:24 AM
 */

#ifndef PRINTER_H
#define	PRINTER_H

#include "player.h"

void printStart();
void printDice(int dice[]);
void printStats(Player *player);
void printGetPlayerName(int i);

void printReadFault();

#endif	/* PRINTER_H */

