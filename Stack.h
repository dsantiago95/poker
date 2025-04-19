#ifndef STACK_H
#define STACK_H

#include "Card.h"

struct Node {
	Card data;
	struct Node* next;
};

typedef struct  {
	struct Node *tail;
	int count;
} Stack;

void push(Stack *, Card);
struct Node *removeAt(Stack *, int);
Card pop(Stack *);
#endif //STACK_H
