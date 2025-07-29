#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 

//  represent a stack 
struct Stack { 
    int top; 
    unsigned capacity; 
    int* array; 
}; 

// create a stack of given capacity.
// stack as 0 
struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
    return stack; 
} 

// Stack is full when top is equal to the last index 
int isFull(struct Stack* stack) 
{ 
    return stack->top == stack->capacity - 1; 
} 

// Stack is empty when top is equal to -1 
int isEmpty(struct Stack* stack) 
{ 
    return stack->top == -1; 
} 

// Function to add an item to stack. It increases top by 1 
void push(struct Stack* stack, int item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
    printf("%d pushed to stack\n", item); 
} 

// Function to remove an item from stack. It decreases top by 1 
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top--]; 
} 

// Function to return the top from stack without removing it 
int peek(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top]; 
}

// Function to print all elements in the stack
void printStack(struct Stack* stack) 
{ 
    if (isEmpty(stack)) { 
        printf("Stack is empty\n"); 
        return; 
    } 
    printf("Stack elements are:\n"); 
    for (int i = stack->top; i >= 0; i--) { 
        printf("%d\n", stack->array[i]); 
    } 
} 

// testing above functions 
int main() 
{ 
    struct Stack* stack = createStack(100); 

    push(stack, 37); 
    push(stack, 39); 
    push(stack, 99); 

    printf("%d popped from stack\n", pop(stack)); 

    printStack(stack); 

    return 0; 
} 
