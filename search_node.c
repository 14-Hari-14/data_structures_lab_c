#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
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

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Function to search for a given data in the linked list
struct Node* searchNode(struct Node* head, int data) {
    struct Node* temp = head;
    int count=0;
    while (temp != NULL) {
    	count = count+1;
        if (temp->data == data) {
            printf("Element found at %d\n", count);
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
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
        printf("Enter data for node %d: ", i + 1);
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
    displayList(head);

    int searchData;
    printf("\nEnter the data to search in the linked list: ");
    scanf("%d", &searchData);

    struct Node* searchResult = searchNode(head, searchData);
    if (searchResult == NULL) {
        printf("Data not found in the linked list.");
    }

    return 0;
}

