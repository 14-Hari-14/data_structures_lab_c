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

// Function to add an element after a given node
void addAfterNode(struct Node* givenNode, int newData) {
    struct Node* newNode = createNode(newData);
    newNode->next = givenNode->next;
    givenNode->next = newNode;
}

// Function to display the linked list
void displayLinkedList(struct Node* head) {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int length, data, givenData;

    printf("Enter the length of the linked list: ");
    scanf("%d", &length);

    // Create the linked list
    for (int i = 0; i < length; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        struct Node* newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
        } else {
            struct Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    printf("Enter the data of the node after which you want to add a new node: ");
    scanf("%d", &givenData);

    printf("Enter the data for the new node: ");
    scanf("%d", &data);

    // Find the given node
    struct Node* temp = head;
    while (temp != NULL && temp->data != givenData) {
        temp = temp->next;
    }

    // If the given node is not found
    if (temp == NULL) {
        printf("Given node not found in the linked list.\n");
        return 0;
    }

    // Add the new node after the given node
    addAfterNode(temp, data);

    // Display the linked list
    displayLinkedList(head);

    return 0;
}

