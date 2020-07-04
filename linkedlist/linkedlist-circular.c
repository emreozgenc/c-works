#include<stdio.h>
#include<stdlib.h>

/* ## Linked list structure ## */
typedef struct n {
	struct n * next;
	int x;
}Node;

/* ## Add node function ## */
Node * addNode(Node * r, int x) {
	if(r == NULL) {
		r = (Node *)malloc(sizeof(Node));
		r->x = x;
		r->next = r;
		return r;
	}
	
	Node * iter = r;
	
	while(iter->next != r) {
		iter = iter->next;
	}
	
	Node * temp = (Node *)malloc(sizeof(Node));
	iter->next = temp;
	temp->x = x;
	temp->next = r;
	return r;
}

/* ## Delete node function ## */
Node * deleteNode(Node * r, int x) {
	if(r->x == x) {
		Node * iter = r;
		Node * temp = r;
		
		while(iter->next != r) {
			iter = iter->next;
		}
		iter->next =  r->next;
		free(temp);
		return iter->next;
	}
	
	Node * iter = r;
	
	while(iter->next != r && iter->next->x != x) {
		iter = iter->next;
		if(iter->next == r) {
			printf("Node not found!\n");
			return r;
		}
	}
	
	Node * temp = iter->next;
	iter->next = iter->next->next;
	free(temp);
	return r;	
}

/* ## Print list function ## */
void printList(Node * r) {
	Node * iter = r;
	// For start loop we need do-while because (r != iter) always return false
	do {
		printf("%d\n", iter->x);
		iter = iter->next;
	}while(iter != r);
}

int main() {
	Node * root = NULL;
}
