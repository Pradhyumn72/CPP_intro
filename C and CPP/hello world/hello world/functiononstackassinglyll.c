#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// Function to push an element onto the stack
void push(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap overflow\n");
        return;
    }
    newNode->data = data;
    newNode->next = top;
    top = newNode;
    printf("%d pushed onto the stack\n", data);
}

// Function to pop an element from the stack
int pop() {
    if (top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct Node* temp = top;
    int poppedData = temp->data;
    top = top->next;
    free(temp);
    return poppedData;
}

// Function to print the stack
void printStack() {
    struct Node* temp = top;
    if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Print stack\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to be pushed: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1) {
                    printf("Popped value is %d\n", value);
                }
                break;
            case 3:
                printStack();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
