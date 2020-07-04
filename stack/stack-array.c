#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

/* ## Stack structure ## */
typedef struct s {
	int index;
	int array[SIZE];
}Stack;

Stack stack;

/* ## Push function ## */
void push(int x) {
	stack.array[++stack.index] = x;
}

/* ## Pop function ## */
int pop() {
	return stack.array[stack.index--];
}

/* ## Peek function ## */
int peek() {
	return stack.array[stack.index];
}

int main() {
	stack.index = -1;
	return 0;
}
