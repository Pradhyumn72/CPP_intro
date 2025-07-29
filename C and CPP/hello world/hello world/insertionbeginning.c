// 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *last = NULL;

void insert_at_beginning() {
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter element\n");
    scanf("%d", &new_node->data);

    if (start == NULL) {
        printf("Empty\n");
        start = new_node;
        new_node->next = start;  // Circular link
        last = new_node;
    } else {
        new_node->next = start;
        start = new_node;
        last->next = start;  // Update last's next to new start
    }
}

void display() {
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = start;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != start);
    printf("(start)\n");
}

int main() {
    char choice;
    do {
        insert_at_beginning();
        printf("Do you want to insert another element? (y/n): ");
        scanf(" %c", &choice); // Space before %c to consume any leftover newline
    } while (choice == 'y' || choice == 'Y');

    printf("Circular Linked List: ");
    display();

    return 0;
}
