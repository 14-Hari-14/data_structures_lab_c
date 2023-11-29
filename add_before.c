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

// Function to add an element before a given node
void addBeforeNode(struct Node** head, int newData, int givenData) {
    struct Node* newNode = createNode(newData);
    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If the given node is the head node
    if (temp != NULL && temp->data == givenData) {
        newNode->next = temp;
        *head = newNode;
        return;
    }

    // Traverse the linked list to find the given node
    while (temp != NULL && temp->data != givenData) {
        prev = temp;
        temp = temp->next;
    }

    // If the given node is not found
    if (temp == NULL) {
        printf("Given node not found in the linked list.\n");
        return;
    }

    // Add the new node before the given node
    prev->next = newNode;
    newNode->next = temp;
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

    printf("Enter the data of the node before which you want to add a new node: ");
    scanf("%d", &givenData);

    printf("Enter the data for the new node: ");
    scanf("%d", &data);

    // Add the new node before the given node
    addBeforeNode(&head, data, givenData);

    // Display the linked list
    displayLinkedList(head);

    return 0;
}

