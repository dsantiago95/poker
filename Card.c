#include <stdio.h>

#include "Stack.h"
#include "Card.h"

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


int main()
{
	Stack shuffled_deck = {.tail = NULL, .count = 0};
	for (int i = 0; i < 52; i++) {
		push(&shuffled_deck, Deck[i]);
	}
}
