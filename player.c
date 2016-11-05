#include <stdlib.h>
#include "player.h"

Player *create_player(char *name)
{
    Player *player = malloc(sizeof(Player));
    
    if (!player) {
        return NULL;
    }
    
    player->name = name;
    
    return player;
}
