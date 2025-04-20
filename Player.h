#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"

typedef struct {
	int chips;
	Card hand[2];
} Player;

#endif //PLAYER_H
