
#include<stdio.h>
#include<stdlib.h>
#define max 50

int queue[max],front=-1,rear=-1;

void enqueue(){
	int item;
	if(rear==max-1){
	printf("Queue overflow");
	return;
	}
	printf("Enter the element to be enqueue: ");
	scanf("%d",&item);
	if(front==-1){
	front = 0;
	}
	rear ++;
	queue[rear] = item;
	printf("%d is inserted to the queue",item);
}

void dequeue(){
	if(front == -1 || front > rear){
	printf("Queue is underflow");
	return;
	}	
	printf("The deleted element is: %d ",queue[front]);
	front ++;
	if( front > rear){
	front = rear = -1;
	}
}

void display(){
	if(front == -1){
	printf("Queue is empty");
	return;
	}
	printf("The queue elements are: ");
	for(int i=front;i<=rear;i++){
	printf("%d ", queue[i]);
	}
}

int main(){

	int change;
	while(1){
	printf("\n--- Queue Menu ---\n1. enqueue\n2. dequeue\n3. Display\n4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&change);

	switch(change){
		case 1 : enqueue();
	  		  break;
		case 2 : dequeue();
	 		  break;
		case 3 : display();
	  		  break;
		case 4 : exit(0);
	 		  break;

	default : printf("Invalid choice");
		      }
		}
	return 0;
}
