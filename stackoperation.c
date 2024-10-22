#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max], top = -1;
void push(){
		int item;
		if(top == max -1 ){
			printf("Stack overflow!, cannot push into the stack\n");
			return;
		}
		printf("Enter the element to be pushed: ");
		scanf("%d",&item);
		top ++ ;
		stack[top] = item;
		printf("%d is pushed into the stack\n",item);
}

void pop(){
	if(top == -1){
		printf("stack underflow");
		return;
	}
	printf("The poped  element is : %d\n",stack[top]);
	top --;
}
void display(){		
		if(top == -1){
		printf("stack is empty");
		return ;
		}
		printf("\nThe elements are : ");
		for(int i=top;i>=0;i--){
		printf("%d\n",stack[i]);
		}
		}


	int main(){

	int change;

	while(1){

	printf("\n--- Stack Menu ---\n1. Push\n2. Pop\n3. Display\n4. Exit\n");

	printf("\nEnter your choice: \n");
	scanf("%d",&change);

	switch (change){

	case 1 :
		push();
		break;

	case 2 : 
		pop();
		break;
       
       case 3 :
       	display();
       	break;

      case 4 :
      		exit(0);
      		break;
      		
     default : 
     		printf("Invalid Choice");
     	}
    }
    return 0;
   } 
	
