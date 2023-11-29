#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node after a given node
void addNodeAfter(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to display the linked list
void displayLinkedList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int length;
    printf("Enter the length of the linked list: ");
    scanf("%d", &length);

    struct Node* head = NULL;
    struct Node* temp = NULL;

    // Creating the linked list
    for (int i = 0; i < length; i++) {
        int data;
        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &data);

        struct Node* newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Linked list created: ");
    displayLinkedList(head);

    int position, data;
    printf("Enter the position after which you want to add a node: ");
    scanf("%d", &position);
    printf("Enter the data for the new node: ");
    scanf("%d", &data);

    struct Node* currentNode = head;
    for (int i = 1; i < position; i++) {
        if (currentNode == NULL) {
            printf("Invalid position.\n");
            return 0;
        }
        currentNode = currentNode->next;
    }

    addNodeAfter(currentNode, data);

    printf("Node added after position %d: ", position);
    displayLinkedList(head);

    return 0;
}

