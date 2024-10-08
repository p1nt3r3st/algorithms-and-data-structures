#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
	int value;
	struct Node *next;
} Node;

void append(Node *head, int val){
	Node *c = head;
	while (c -> next){
		c = c -> next;
	}
	
	Node *node = NULL;
	node = (Node*)malloc(sizeof(Node));
	node -> value = val;
	node -> next = NULL;
	c -> next = node;
}

void printList(Node *head){
	Node *c = head;
	printf("[");
	while (c -> next){
		printf("%d, ", c -> value);
		c = c -> next;
	}
	printf("%d]\n", c -> value);
}

int pop(Node *head){
	Node *c = head;
	int result;
	while (c -> next -> next){
	c = c -> next;
}
	if (c == head){
		result = c -> value;
		free(c);
}
	else {
		result = c -> next -> value;
		free(c -> next);
		c -> next = NULL;
}
	return result;
}

int indexList(Node *head, int i){
	Node *c = head;
	int j = 0;
	int result = -100;
	while (j < i && c){
		printf("%d\n", c -> value);
		c = c -> next;
		j += 1;
}
	if (i == j) result = c -> value;
	return result;
}

int length(Node *head){
	Node *c = head;
	int j = 0;
	while (c){
		c = c -> next;
		j += 1;
}
	return j;
}

void deleteIdx(Node *head, int i){
	Node *c = head;
	if (i == 0){
		if (c -> next){
			head -> next = c -> next -> next;
			head -> value = c -> value;
			free(c);
}
		else{
			free(c);
}
}
	int size = length(head);
	if (i == size - 1){
		pop(head);
}
	if (i < size - 1 && i > 0){
		int j = 0;
		Node *c = head;
		while (j < i - 1){
			c = c -> next;
			j += 1;
}
		Node *k = c -> next -> next;
		free(c -> next);
		c -> next = k;
}




}

int main(){
	Node *head = NULL;
	head = (Node*)malloc(sizeof(Node));
	head -> value = 1;
	head -> next = NULL;

	char myString[40];
	
	printf("%d", head -> value);
	append(head, 2);
	append(head, 3);
	append(head, 4);
	deleteIdx(head, 1);
	printList(head);
	printf("pop=%d\n", pop(head));
	printList(head);
	printf("%d\n", indexList(head, 1));
	printf("size=%d\n", length(head));
	printf("Введите текст:\n");
	fgets(myString, 40, stdin);
	puts(myString);
	
printf("Hello!\n");
return 0;
}
