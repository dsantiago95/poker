#ifndef BOARD_H
#define BOARD_H

#include "Card.h"
#include "Stack.h"
#include "Player.h"

struct Board {
	Card flop[3];
	Card turn;
	Card river;
};

// Return an array of 2 Cards. Accepts a (presumably shuffled) array of Cards.
void deal_hand(Stack *, Player *);

// Return an array of 3 Cards. Accepts a (presumably shuffled) array of Cards.
void deal_flop(Stack *, struct Board *);

#endif //BOARD_H
