#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "Stack.h"
#include "Card.h"
#include "Player.h"
#include "Board.h"

Card Deck[52] = {//*{{{*/
	(Card) {.rank = 1, .suit = 'h'},
	(Card) {.rank = 2, .suit = 'h'},
	(Card) {.rank = 3, .suit = 'h'},
	(Card) {.rank = 4, .suit = 'h'},
	(Card) {.rank = 5, .suit = 'h'},
	(Card) {.rank = 6, .suit = 'h'},
	(Card) {.rank = 7, .suit = 'h'},
	(Card) {.rank = 8, .suit = 'h'},
	(Card) {.rank = 9, .suit = 'h'},
	(Card) {.rank = 10, .suit = 'h'},
	(Card) {.rank = 11, .suit = 'h'},
	(Card) {.rank = 12, .suit = 'h'},
	(Card) {.rank = 13, .suit = 'h'},
	(Card) {.rank = 1, .suit = 'c'},
	(Card) {.rank = 2, .suit = 'c'},
	(Card) {.rank = 3, .suit = 'c'},
	(Card) {.rank = 4, .suit = 'c'},
	(Card) {.rank = 5, .suit = 'c'},
	(Card) {.rank = 6, .suit = 'c'},
	(Card) {.rank = 7, .suit = 'c'},
	(Card) {.rank = 8, .suit = 'c'},
	(Card) {.rank = 9, .suit = 'c'},
	(Card) {.rank = 10, .suit = 'c'},
	(Card) {.rank = 11, .suit = 'c'},
	(Card) {.rank = 12, .suit = 'c'},
	(Card) {.rank = 13, .suit = 'c'},
	(Card) {.rank = 1, .suit = 'd'},
	(Card) {.rank = 2, .suit = 'd'},
	(Card) {.rank = 3, .suit = 'd'},
	(Card) {.rank = 4, .suit = 'd'},
	(Card) {.rank = 5, .suit = 'd'},
	(Card) {.rank = 6, .suit = 'd'},
	(Card) {.rank = 7, .suit = 'd'},
	(Card) {.rank = 8, .suit = 'd'},
	(Card) {.rank = 9, .suit = 'd'},
	(Card) {.rank = 10, .suit = 'd'},
	(Card) {.rank = 11, .suit = 'd'},
	(Card) {.rank = 12, .suit = 'd'},
	(Card) {.rank = 13, .suit = 'd'},
	(Card) {.rank = 1, .suit = 's'},
	(Card) {.rank = 2, .suit = 's'},
	(Card) {.rank = 3, .suit = 's'},
	(Card) {.rank = 4, .suit = 's'},
	(Card) {.rank = 5, .suit = 's'},
	(Card) {.rank = 6, .suit = 's'},
	(Card) {.rank = 7, .suit = 's'},
	(Card) {.rank = 8, .suit = 's'},
	(Card) {.rank = 9, .suit = 's'},
	(Card) {.rank = 10, .suit = 's'},
	(Card) {.rank = 11, .suit = 's'},
	(Card) {.rank = 12, .suit = 's'},
	(Card) {.rank = 13, .suit = 's'}
};/*}}}*/

bool is_in_array(int array[], int x) {/*{{{*/
	int size = sizeof(array)/sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		if (array[i] == x)
		{
			return true;
		}
	}
	return false;
}/*}}}*/

// Returns a new shuffled Deck
Stack shuffle_deck(){/*{{{*/
	int shuffle_index[52];
	for (int i = 0; i < 52; i++) {
		shuffle_index[i] = i;
	}

	srand(time(NULL));
	for (int i = 0; i < 52; i++) {
		int temp = shuffle_index[i];
		int random_index = rand() % 52;
		shuffle_index[i] = shuffle_index[random_index];
		shuffle_index[random_index] = temp;
	}

	Stack shuffled_deck = {.tail = NULL, .count = 0};
	for (int i = 0; i < 52; i++) {
		push(&shuffled_deck, Deck[shuffle_index[i]]);
	}

	return shuffled_deck;
}/*}}}*/


int main()
{
	Stack shuffled_deck = shuffle_deck();


	printf("Only 1 player and the board.\n");
	printf("Dealing player hand...\n");

	Player player;
	deal_hand(&shuffled_deck, &player);
	printf("Player's hand:\n");
	printf("\t%d of %c\n", player.hand[0].rank, player.hand[0].suit);
	printf("\t%d of %c\n", player.hand[1].rank, player.hand[1].suit);

	struct Board board;
	printf("... betting ...\n");
	printf("Dealing flop...\n");
	deal_flop(&shuffled_deck, &board);
	printf("The board shows:\n");
	printf("\t%d of %c\n", board.flop[0].rank, board.flop[0].suit);
	printf("\t%d of %c\n", board.flop[1].rank, board.flop[1].suit);
	printf("\t%d of %c\n", board.flop[2].rank, board.flop[2].suit);

}
