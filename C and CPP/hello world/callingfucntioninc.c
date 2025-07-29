// // // // // // #include<stdio.h>
// // // // // // #include<stdlib.h>
// // // // // // void sum ()
// // // // // // {
// // // // // //     int a, b, sum = 0;
// // // // // //     printf("Enter two numbers:");
// // // // // //     scanf("%d %d" , &a ,&b);
// // // // // //     sum= a + b;
// // // // // //     printf("Sum = %d\n %d, sum");

// // // // // // }

// // // // // // int main()
// // // // // // {
// // // // // // sum();
// // // // // // return 0;
// // // // // // }

// // // // // // // #include <stdio.h>
// // // // // // // #include <stdlib.h>

// // // // // // // void sum() {
// // // // // // //     int a, b, sum = 0;
// // // // // // //     printf("Enter two numbers: ");
// // // // // // //     scanf("%d %d", &a, &b); // Corrected the syntax and format of scanf
// // // // // // //     sum = a + b;
// // // // // // //     printf("Sum = %d\n", sum); // Corrected the syntax of printf
// // // // // // // }

// // // // // // // int main() { // The main function should return an int
// // // // // // //     sum(); // Corrected the function call
// // // // // // //     return 0; // Added return statement for main
// // // // // // // }

// // // // // // C program to illustrate Pointers
// // // // // #include <stdio.h>

// // // // // void geeks()
// // // // // {
// // // // //     int var = 10;
// // // // //     int vari = 12;

// // // // //     // declare pointer variable
// // // // //     int* ptr;

// // // // //     // note that data type of ptr and var must be same
// // // // //     ptr = &vari;

// // // // //     // assign the address of a variable to a pointer
// // // // //     printf("Value at var = %d \n", var);
// // // // //     printf("Value at *ptr = %d \n", *ptr);
// // // // // }

// // // // // // Driver program
// // // // // int main()
// // // // // {
// // // // //     geeks();
// // // // //     return 0;
// // // // // }

// // // // #include <stdio.h>
// // // // #include <stdlib.h>

// // // // // Define the structure for a node
// // // // struct Node {
// // // //     int data;
// // // //     struct Node* next;
// // // // };

// // // // // Function to create a new node
// // // // struct Node* createNode
// // // //      (int data) {
// // // //     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
// // // //     newNode->data = data;
// // // //     newNode->next = NULL;
// // // //     return newNode;
// // // // }

// // // // // Function to insert a node at the beginning of the list
// // // // void insertAtBeginning(struct Node** head, int data) {
// // // //     struct Node* newNode = createNode(data);
// // // //     newNode->next = *head;
// // // //     *head = newNode;
// // // // }

// // // // // Function to insert a node at the end of the list
// // // // void insertAtEnd(struct Node** head, int data) {
// // // //     struct Node* newNode = createNode(data);
// // // //     if (*head == NULL) {
// // // //         *head = newNode;
// // // //         return;
// // // //     }
// // // //     struct Node* temp = *head;
// // // //     while (temp->next != NULL) {
// // // //         temp = temp->next;
// // // //     }
// // // //     temp->next = newNode;
// // // // }

// // // // // Function to delete a node with a given key
// // // // void deleteNode(struct Node** head, int key) {
// // // //     struct Node* temp = *head;
// // // //     struct Node* prev = NULL;

// // // //     // If head node itself holds the key
// // // //     if (temp != NULL && temp->data == key) {
// // // //         *head = temp->next;
// // // //         free(temp);
// // // //         return;
// // // //     }

// // // //     // Search for the key to be deleted
// // // //     while (temp != NULL && temp->data != key) {
// // // //         prev = temp;
// // // //         temp = temp->next;
// // // //     }

// // // //     // If key was not present in the list
// // // //     if (temp == NULL) return;

// // // //     // Unlink the node and free memory
// // // //     prev->next = temp->next;
// // // //     free(temp);
// // // // }

// // // // // Function to print the linked list
// // // // void printList(struct Node* head) {
// // // //     struct Node* temp = head;
// // // //     while (temp != NULL) {
// // // //         printf("%d -> ", temp->data);
// // // //         temp = temp->next;
// // // //     }
// // // //     printf("NULL\n");
// // // // }

// // // // int main() {
// // // //     struct Node* head = NULL;

// // // //     insertAtEnd(&head, 1);
// // // //     insertAtEnd(&head, 2);
// // // //     insertAtEnd(&head, 3);
// // // //     printList(head);

// // // //     insertAtBeginning(&head, 0);
// // // //     printList(head);

// // // //     deleteNode(&head, 2);
// // // //     printList(head);

// // // //     return 0;
// // // // }


// // // #include <stdio.h>
// // // #include <stdlib.h>


// // // struct Node {
// // //     int data;
// // //     struct Node* left;
// // //     struct Node* right;
// // // };


// // // struct Node* newNode(int data) {
// // //     struct Node* node = (struct Node*)malloc(sizeof(struct Node));
// // //     node->data = data;
// // //     node->left = NULL;
// // //     node->right = NULL;
// // //     return node;
// // // }


// // // void inorderTraversal(struct Node* root) {
// // //     if (root == NULL) {
// // //         return;
// // //     }

    
// // //     inorderTraversal(root->left);

   
// // //     printf("%d ", root->data);

   
// // //     inorderTraversal(root->right);
// // // }

// // // int main() {
    
// // //     struct Node* root = newNode(1);
// // //     root->left = newNode(2);
// // //     root->right = newNode(3);
// // //     root->left->left = newNode(4);
// // //     root->left->right = newNode(5);

// // //     printf("In-order traversal: ");
// // //     inorderTraversal(root);
// // //     printf("\n");

// // //     return 0;
// // // }
// // //       

// // #include <stdio.h>
// // #include <stdlib.h>

// // #define MAX 100  // Maximum size of the stack

// // // Stack structure
// // struct Stack {
// //     int arr[MAX];
// //     int top;
// // };

// // // Function to initialize the stack
// // void initializeStack(struct Stack* stack) {
// //     stack->top = -1;  // Indicates that the stack is initially empty
// // }

// // // Function to check if the stack is empty
// // int isEmpty(struct Stack* stack) {
// //     return stack->top == -1;
// // }

// // // Function to check if the stack is full
// // int isFull(struct Stack* stack) {
// //     return stack->top == MAX - 1;
// // }

// // // Function to push an element onto the stack
// // void push(struct Stack* stack, int data) {
// //     if (isFull(stack)) {
// //         printf("Stack overflow. Cannot push %d\n", data);
// //     } else {
// //         stack->arr[++(stack->top)] = data;
// //         printf("%d pushed onto stack\n", data);
// //     }
// // }

// // // Function to pop an element from the stack
// // int pop(struct Stack* stack) {
// //     if (isEmpty(stack)) {
// //         printf("Stack underflow. Cannot pop\n");
// //         return -1;  // Return -1 if the stack is empty
// //     } else {
// //         return stack->arr[(stack->top)--];
// //     }
// // }

// // // Function to peek the top element of the stack
// // int peek(struct Stack* stack) {
// //     if (isEmpty(stack)) {
// //         printf("Stack is empty. Cannot peek\n");
// //         return -1;
// //     } else {
// //         return stack->arr[stack->top];
// //     }
// // }

// // // Main function to test the stack implementation
// // int main() {
// //     struct Stack stack;
// //     initializeStack(&stack);

// //     push(&stack, 10);
// //     push(&stack, 20);
// //     push(&stack, 30);

// //     printf("Top element is %d\n", peek(&stack));

// //     printf("%d popped from stack\n", pop(&stack));
// //     printf("Top element is %d\n", peek(&stack));

// //     return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a binary tree node
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// // Function to insert a node in a binary tree (binary search tree manner)
// struct Node* insert(struct Node* root, int data) {
//     // If the tree is empty, create a new node and return it as the root
//     if (root == NULL) {
//         return createNode(data);
//     }

//     // Otherwise, recursively insert into the left or right subtree
//     if (data < root->data) {
//         root->left = insert(root->left, data);
//     } else {
//         root->right = insert(root->right, data);
//     }

//     return root;
// }

// // Inorder Traversal: Left -> Root -> Right
// void inorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         inorderTraversal(root->left);
//         printf("%d ", root->data);
//         inorderTraversal(root->right);
//     }
// }

// // Preorder Traversal: Root -> Left -> Right
// void preorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         printf("%d ", root->data);
//         preorderTraversal(root->left);
//         preorderTraversal(root->right);
//     }
// }

// // Postorder Traversal: Left -> Right -> Root
// void postorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         postorderTraversal(root->left);
//         postorderTraversal(root->right);
//         printf("%d ", root->data);
//     }
// }

// // Main function to test the binary tree implementation
// int main() {
//     struct Node* root = NULL;

//     // Insert nodes into the binary tree
//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);

//     // Traversals of the binary tree
//     printf("Inorder traversal: ");
//     inorderTraversal(root);
//     printf("\n");

//     printf("Preorder traversal: ");
//     preorderTraversal(root);
//     printf("\n");

//     printf("Postorder traversal: ");
//     postorderTraversal(root);
//     printf("\n");

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new binary tree node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform Inorder traversal (Left -> Root -> Right)
void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }

    // Traverse the left subtree
    inorderTraversal(root->left);

    // Visit the root node
    printf("%d ", root->data);

    // Traverse the right subtree
    inorderTraversal(root->right);
}

// Main function to test the inorder traversal
int main() {
    // Create the binary tree nodes
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Perform Inorder traversal
    printf("Inorder traversal of the binary tree: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
