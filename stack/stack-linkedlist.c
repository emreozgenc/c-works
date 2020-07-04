#include<stdlib.h>
#include<stdio.h>

/* ## Linked list structure ## */
typedef struct n {
	struct n * prev;
	int x;
}Node;

/* ## Global stacks top node variable ## */
Node * top;

/* ## Push function ## */
void push(int x) {
	Node * temp = (Node *)malloc(sizeof(Node));
	temp->x = x;
	temp->prev = top;
	top = temp;
}

/* ## Pop function ## */
Node * pop() {
	Node * temp = top;
	top = top->prev;
	return temp;
}

/* ## Peek function ## */
Node * peek() {
	return top;
}

int main() {
	
}
