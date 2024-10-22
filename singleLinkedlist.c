#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; 
    struct Node* link; 
};

struct Node* start = NULL;


struct Node* createNode() {
    int item;
    printf("Enter the value to insert: ");
    scanf("%d", &item);
    
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    new_node->data = item;
    new_node->link = NULL;
    return new_node;
}

void insertAtHead() {
    struct Node* new_node = createNode();
    new_node->link = start;
    start = new_node;
}


void insertAtTail() {
    struct Node* new_node = createNode();
    if (start == NULL) {
        start = new_node;
    } else {
        struct Node* ptr = start;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = new_node;
    }
}


void deleteAtHead() {
    if (start == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct Node* temp = start;
    start = start->link;
    free(temp);
    printf("Head node deleted successfully.\n");
}


void deleteAtTail() {
    if (start == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    
    if (start->link == NULL) {
        free(start);
        start = NULL;
        printf("Tail node deleted successfully.\n");
        return;
    }

    struct Node* ptr = start;
    struct Node* prev = NULL;
    while (ptr->link != NULL) {
        prev = ptr;
        ptr = ptr->link;
    }
    free(ptr);
    prev->link = NULL;
    printf("Tail node deleted successfully.\n");
}


void traverse() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* ptr = start;
    while (ptr != NULL) {
        printf("-> %d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}


void freeList() {
    while (start != NULL) {
        deleteAtHead();
    }
}


int main() {
    int choice;
    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert at Head\n");
        printf("2. Insert at Tail\n");
        printf("3. Delete Head\n");
        printf("4. Delete Tail\n");
        printf("5. Traverse List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: 
                insertAtHead();
                break;
            case 2: 
                insertAtTail();
                break;
            case 3: 
                deleteAtHead();
                break;
            case 4: 
                deleteAtTail();
                break;
            case 5: 
                printf("Current List: ");
                traverse();
                break;
            case 6: 
                freeList();
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }
    return 0;
}
