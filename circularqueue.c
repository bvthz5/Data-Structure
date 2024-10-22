/* Circular Queue Operation */

#include<stdio.h>
#include<stdlib.h>
#define max 50

int queue[max], front=-1,rear=-1,count=0;

void enqueue(){
	int item;
	if (count == max) {
	printf("Circular queue is full.\n");
	return;
	}
	printf("enter the element to be enqueued: ");
	scanf("%d", &item);
	if (front == -1) {
	front = 0; 
	}
	rear = (rear + 1) % max;
	queue[rear] = item; 
	count++; 
	printf("%d enqueued to the queue.\n", item);
}

void dequeue(){
	if(count==0){
	printf("Circular queue is empty");
	return;
	}
	printf("Dequeued element: %d\n",queue[front]);
	front = (front+1) % max;
	count --;
}

void display(){
	if(count==0){
	printf("Circular queue is empty");
	return;
	}
	int j = front;
	printf("Queue element are: ");
	for(int i=0;i<count;i++){
	printf("%d ",queue[j]);
	j= (j+1) % max;
	}
	printf("\n");
}

int main(){
	int ch;
	while(1){
	printf("\n...Circular Queue Menu..\n 1. enqueue\n 2.dequeue\n 3.Display\n 4.exit \n");
	printf("Enter your choice: ");
	scanf("%d",&ch);;
	switch(ch){
	case 1 : enqueue();
         break;
	case 2 : dequeue();
         break;
	case 3 : display();
         break;
	case 4 : exit(0);
	default : printf("Invalid Choice");
	}
	}
	return 0;
}
