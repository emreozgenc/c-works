#include<stdio.h>
#include<stdlib.h>

/* ## Bidirectional linked list structure ## */
typedef struct n {
	struct n * next;
	struct n * prev;
	int x;
}Node;

/* ## Add node function ## */
Node * addNode(Node * r, int x) {
	if(r == NULL) {
		r = (Node *)malloc(sizeof(Node));
		r->x = x;
		r->next = NULL;
		r->prev = NULL;
		return r;
	}
	
	Node * iter = r;
	while(iter->next != NULL) {
		iter = iter->next;
	}
	
	Node * temp = (Node *)malloc(sizeof(Node));
	temp->x = x;
	temp->next = NULL;
	temp->prev = iter;
	iter->next = temp;
	return r;
}

/* ## Delete node function ## */
Node * deleteNode(Node * r, int x) {
	if(r->x == x) {
		Node * temp = r;
		r->next->prev = NULL;
		r = r->next;
		free(temp);
		return r;
	}
	
	Node * iter = r;
	while(iter->next->x != x && iter->next != NULL) {
		iter = iter->next;
		if(iter->next == NULL) {
			printf("Node not found!");
			return r;
		}
	}
	
	Node * temp = iter->next;
	iter->next = iter->next->next;
	iter->next->prev = iter;
	free(temp);
	return r;
}

/* ## Print list function ## */
void printList(Node * r) {
	while(r != NULL) {
		printf("%d\n", r->x);
		r = r->next;
	}
}

int main() {
	Node * root = NULL;
}
