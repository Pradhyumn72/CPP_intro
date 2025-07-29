// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node*next;
// };

// void_insertend(struct Node**head,int data);{
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if(!newNode){
//         printf("Memory allocation failed\n");
//         return 0;
//     }
//     newNode->data = data;
//     if(*head==NULL){
//         *head=new Node;
//         newnNode->next= newNode;
//         else{
//             struct Node*temp =head;
//             while (temp->head !=*head)
//             temp =temp->next; 
//         }
//     }

//     void printlist (struct Node* head){
//         if(head=NULL){
//             printf("The list is empty\n");
//             return 0;
//         }
//     }
//     struct Node* temp =head; 
// }

#include <stdio.h>
#include <stdlib.h>

// structure for a stack node
struct Node {
    int data;
    struct Node* next;
};

// pushing function 
void push(struct Node** top, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack overflow\n");
        return;
    }
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

//  poping  an element function  from the stack
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct Node* temp = *top;
    int popped = temp->data;
    *top = (*top)->next;
    free(temp);
    return popped;
}

//  printing stack
void printStack(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are: \n");
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

int main() {
    struct Node* stack = NULL;

    // Pushing application onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Print 
    printf("Before popping:\n");
    printStack(stack);

    // Pop 
    printf("Popped element: %d\n", pop(&stack));

    
    printf("After popping:\n");
    printStack(stack);

    return 0;
}

