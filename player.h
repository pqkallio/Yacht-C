/* 
 * File:   player.h
 * Author: kallionpetri
 *
 * Created on October 30, 2016, 8:28 AM
 */

#ifndef PLAYER_H
#define	PLAYER_H
struct player_t {
    char *name;
    int points[14];
} typedef Player;

Player *createPlayer(char *name);
void addPoints(unsigned int points, unsigned int slot);

#endif	/* PLAYER_H */

