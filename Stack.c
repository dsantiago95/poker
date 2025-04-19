#include <stdio.h>

struct Node {
	int data;
	struct Node* next;
};

typedef struct  {
	struct Node *tail;
	int count;
} Stack;

void push(Stack list, int item) {
	struct Node itemnode = {.data = item};
	if (list.count == 0)
	{
		itemnode.next = &itemnode;
	} else {
		itemnode.next = list.tail;
		list.tail = &itemnode;
	}
	list.tail = &itemnode;
	list.count++;
}

struct Node pop(Stack stack)
{
	struct Node itemnode = *stack.tail;
	stack.tail = NULL;
	return itemnode;
}

int main()
{
	Stack deck;
	struct Node x = {.data = 20};
	push(deck, 7);
}
