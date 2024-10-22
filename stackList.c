
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};

struct node* start = NULL;

struct node* getnode(){
	int item;
	printf("Enter the value to insert: ");
	scanf("%d",&item);

struct node* new_node = (struct node*)malloc(sizeof(struct node));

	new_node -> data = item;
	new_node -> link = NULL;
	return new_node;
}

void push(){
	struct node* new_node = getnode();
	if(start == NULL){
	start = new_node;
	}
	else{
	new_node -> link = start;
	start = new_node;
	}
	printf("%d is pushed\n",new_node->data);
}

int pop(){
	if(start == NULL){
	printf("stack is empty");
	return 0;
	}
	else{
	struct node* ptr = start;
	start = start -> link;
	free(ptr);
	return 1;
	}
}

void traverse(){
	if(start == NULL){
	printf("Stack is empty");
	}
	else {
	printf("Stack elements are: ");
        struct node* ptr = start; 
        while (ptr != NULL) {
            printf("-> %d", ptr->data); 
            ptr = ptr->link; 
        }
	}
}

void freeList(){
	while(start != NULL){
	pop();
	}
}

int main() {
	int choice;
	while (1) {
	printf("\n---Stack Menu ---\n1. Push\n2. Pop\n3. Traverse\n4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch (choice) {
	case 1:
	push(); 
	break;
	case 2:
	if(pop()){
	printf("Top element poped.\n"); 
	}
	break;
	case 3:
	traverse(); 
	break;
	case 4:
	printf("Exiting program.\n");
	freeList(); 
	exit(0); 
	default:
	printf("Invalid choice! Please choose a valid option.\n");
	}
	}
	return 0;
}
