
#include<stdio.h>

int main(){
int size;

printf("Enter the limit: ");
scanf("%d",&size);

int a[size];
printf("Enter the elements: ");

for(int i=0;i<size;i++){
	scanf("%d",&a[i]);
}

for(int i=0;i<size-1;i++){
   for(int j=0;j<size-i-1;j++){
   if(a[j]>a[j+1]){
   int temp = a[j];
   a[j] = a[j+1];
   a[j+1] = temp;
  }
 }
}

printf("sorted array: ");
for(int i=0;i<size;i++){
	printf("%d ",a[i]);
}
	printf("\n");
	return 0;
}
