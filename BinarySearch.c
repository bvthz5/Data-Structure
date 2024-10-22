
#include<stdio.h>

int main(){
int size, key;

printf("Enter the limit: ");
scanf("%d",&size);

int a[size];
printf("Enter the elements: ");
for(int i=0;i<size;i++){
	scanf("%d",&a[i]);
}

printf("Enter the search element: ");
scanf("%d",&key);
int low=0, high= size-1,mid,found=0;

while(low<=high){
	mid=low+(high-low)/2;
	if(a[mid]==key){
	printf("Element found at index %d\n",mid);
	found = 1;
	break;
}
	if(a[mid]<key)
	low = mid+1;
	else
	high = mid-1;
}
	if(! found)
	printf("Element not found\n");
	return 0;
}
