#include <stdio.h>

int main() {
    int size, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &target);

 
    int result = -1; 
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            result = i;
            break; 
        }
    }

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

