#include<stdio.h>
#include<stdlib.h>


/* ## Linked list structure ## */
typedef struct n {
	struct n * next;
	int x;
}Node;

/* ## Add function ## */
Node * addNode(Node * r, int x) {
	if(r == NULL) {
		r = (Node *)malloc(sizeof(Node));
		r->x = x;
		r->next = NULL;
		return r;
	}
	
	Node * iter = r; // Iterator for not lose root
	while(iter->next != NULL) {
		iter = iter->next;
	}
	
	Node * newNode = (Node *)malloc(sizeof(Node));
	newNode->x = x;
	newNode->next = NULL;
	iter->next = newNode;
	return r;	
}

/* ## Print function ## */
void printList(Node * r) {
	while(r != NULL) {
		printf("%d\n", r->x);
		r = r->next;
	}
}

int main() {
	Node * root = NULL;
}
