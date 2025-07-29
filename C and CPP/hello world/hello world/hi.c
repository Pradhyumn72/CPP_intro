// #include <stdio.h>
// #include <stdlib.h>

// // Define the node structure
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to insert a node at the end of the Circular Linked List
// void insertEnd(struct Node** head, int data) {
//     // Create a new node
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (!newNode) 
//         printf("Memory allocation failed\n");
//         return;
//     }
//     newNode->data = data;

//     // If the list is empty
//     if (*head == NULL) {
//         *head = newNode;
//         newNode->next = newNode;
//     } else {
//         // Traverse to the last node
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         // Insert new node at the end
//         temp->next = newNode;
//         newNode->next = *head;
//     }
// }

// // Function to print the Circular Linked List
// void printList(struct Node* head) {
//     if (head == NULL) {
//         printf("The list is empty\n");
//         return;
//     }

//     struct Node* temp = head;
//     do {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("(head)\n");
// }

// int main() {
//     struct Node* head = NULL;
//     int choice, data;

//     do {
//         printf("Enter data to insert into the Circular Linked List: ");
//         scanf("%d", &data);
//         insertEnd(&head, data);

//         printf("Do you want to insert another node? (1 for Yes / 0 for No): ");
//         scanf("%d", &choice);
//     } while (choice == 1);

//     printf("Circular Linked List: ");
//     printList(head);

//     return 0;
// }


// void displayQueue(struct Queue* queue) {
//     if (queue->front == NULL) {
//         printf("Queue is empty\n");
//         return;
//     }
//     struct Node* temp = queue->front;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Define the maximum size of the circular queue

typedef struct {
    int items[MAX];
    int front;
    int rear;
} CircularQueue;

// Function to create a new circular queue
CircularQueue* createQueue() {
    CircularQueue* queue = (CircularQueue*)malloc(sizeof(CircularQueue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Check if the queue is full
int isFull(CircularQueue* queue) {
    return (queue->front == (queue->rear + 1) % MAX);
}

// Check if the queue is empty
int isEmpty(CircularQueue* queue) {
    return (queue->front == -1);
}

// Add an element to the queue
void enqueue(CircularQueue* queue, int element) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot insert %d\n", element);
        return;
    }
    if (queue->front == -1) { // First element being added
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1) % MAX;
    queue->items[queue->rear] = element;
    printf("Inserted %d\n", element);
}

// Remove an element from the queue
int dequeue(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue\n");
        return -1;
    }
    int element = queue->items[queue->front];
    if (queue->front == queue->rear) { // The queue has only one element
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX;
    }
    printf("Removed %d\n", element);
    return element;
}

// Display the queue elements
void display(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are:\n");
    int i = queue->front;
    while (1) {
        printf("%d ", queue->items[i]);
        if (i == queue->rear) {
            break;
        }
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    CircularQueue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);

    display(queue);

    dequeue(queue);
    display(queue);

    enqueue(queue, 60);
    display(queue);

    enqueue(queue, 70);

    return 0;
}

