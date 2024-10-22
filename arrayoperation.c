
#include<stdio.h>
#include<stdlib.h>

int array[50],i,size=0,n;

void create(){
	printf("Enter the Number: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++){
	scanf("%d",&array[i]);
	}
	size= n;
}

void insert(){
	int item;
	printf("Enter the element to be inserted: ");
	scanf("%d",&item);
	array[size] = item;
	size++;
	printf("%d inserted into the array",item);
}

void delete(){
	if(size<=0){
	printf("Array is empty");
	return;
	}
	int pos;
	printf("Enter the position (0 to %d) of the element to be deleted : ",size-1);
	scanf("%d",&pos);
	if(pos<0 || pos>=size){
	printf("invalid position");
	return;
	}
	for(int i=pos;i<size-1;i++){
	array[i] = array[i+1];
	}
	size --;
	printf("Element at position %d deleted from the array",pos);
}

void display(){
	if(size<=0){
	printf("Array is empty");
	return;
	}
	printf("Array elements are: ");
	for(int i=0;i<size;i++){
	printf("%d ",array[i]);
	}
	printf("\n");
}

void search(){
	if(size<=0){
	printf("Array is empty");
	return;
	}
	int item;
	printf("Enter the element to be searched: ");
	scanf("%d",&item);
	for(int i=0;i<size;i++){
	if(array[i]==item){
	printf("%d found at position %d.\n",item,i);
	return;
	}
	}
	printf("%d not found in the array",item);
}

int main(){
	int ch;
	create();
	while(1){
	printf("\n...Array Menu..\n 1. insert\n 2.Delete\n 3.Display\n 4.search\n 5.exit \n");
	printf("Enter your choice: ");
	scanf("%d",&ch);;
	switch(ch){
	case 1 : insert();
         break;
	case 2 : delete();
         break;
	case 3 : display();
         break;
	case 4 : search();
         break;
	case 5 : exit(0);
	default : printf("Invalid Choice");
	}
	}
	return 0;
}

