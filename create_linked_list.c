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

// Function to create a linked list
struct Node* createLinkedList() {
	// initializing pointer values
    struct Node* head = NULL;
    struct Node* temp = NULL;

    int length;    
    printf("Enter the length of the linked list: ");
    scanf("%d", &length);

	//loop to create as many nodes as required
    for (int i = 0; i < length; i++) {
        int data;
        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &data);

        struct Node* newNode = createNode(data); //calling the function createNode to create a new node every instance of the loop
		
		//if the head is empty then that means there is only one element added or it is the first element added to the list hence head and temp are updated to the memory address of the newNode
        if (head == NULL) 
        {
            head = newNode;
            temp = newNode;
        }
        //if the head is not empty that means there are members already present in the node hence only temp pointer is updated  
        else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    return head;
}

// Function to display the linked list
void displayLinkedList(struct Node* head) {
    struct Node* temp = head;

    printf("Linked List: ");
    //until the last element is reached keep printing the data of each node
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct Node* head = createLinkedList();
    displayLinkedList(head);

    return 0;
}

