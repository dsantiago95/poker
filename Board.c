#include "Board.h"


void deal_hand(Stack *deck, Player *player)
{
	for (int i = 0; i < 2; i++)
	{
		player->hand[i] = pop(deck);
	}

}


void deal_flop(Stack *deck, struct Board *board)
{
	for (int i = 0; i < 3; i++)
	{
		board->flop[i] = pop(deck);
	}

}
