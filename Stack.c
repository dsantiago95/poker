#include <stdio.h>
#include <stdlib.h>

#include "Card.h"
#include "Stack.h"



void push(Stack *list, Card item) {
	struct Node *itemnode = malloc(sizeof(struct Node));
	itemnode->data = item;
	itemnode->next = NULL;
	if (list->count == 0)
	{
		itemnode->next = itemnode;
	} else {
		itemnode->next = list->tail;
		list->tail = itemnode;
	}
	list->tail = itemnode;
	list->count++;
}

struct Node *removeAt(Stack *list, int index)
{
	if (index < 0 || index >= list->count)
	{
		printf("index out of bounds\n");
		return NULL;
	}
	struct Node *ret = malloc(sizeof(struct Node));
	if (index == 0)
	{
		ret = list->tail;
		if (list->count == 1) {
			list->tail = NULL;
		} else {
			list->tail = list->tail->next;
		}
		list->count--;
	} else {
		struct Node *prev = list->tail->next;
		for (int i = 0; i < index-1; i++) {
			prev = prev->next;
		}

		struct Node *curr = prev->next;
		ret = curr;
		prev->next = curr->next;
		curr->next = NULL;
		list->count--;
		if (curr == list->tail)
		{
			list->tail = prev;
		}
	}
	return ret;
}

Card pop(Stack *stack)
{
	return removeAt(stack, 0)->data;
}

