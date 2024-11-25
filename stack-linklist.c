#include <stdio.h>

typedef struct Node {
    int data;
    Node *next;
} Node;

// Create the n number of the node
Node *isCreateNode(int size) {
    if(size <=0 ){
        printf("Invilad entry");
        return NULL;
    }
    Node *head = malloc(sizeof(Node));
    Node *current = head;

    for(int i=1; i<size; i++){
        current = (1 < (size-1)) ? malloc(sizeof(Node)) : NULL;
        if (!current->next) {
            current->next = NULL; // Handle memory allocation failure gracefully
            break;
        }
        current = current->next;
    }
    current->next = NULL;
    return head;
}

// Populating the link list
void populatelinklist(Node *linklist){
    while(linklist != NULL){
        printf("Please Enter The Elements In The Link List\n");
        scanf("%d",&linklist->data);
        linklist = linklist->next;
    }
}

// Deleting the link list
void deleteNode(Node *linklist){
    Node *current = linklist;
    Node *nextNode;
    
    while(current != NULL){
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
}

// Deleting the nth node of the link list
void deletingNLinklist(Node **linklist, int nNodeDelete){
    if(*linklist == NULL || nNodeDelete <= 0){
        printf("Invalide Entry \n");
        return;
    }

    // Deleting the head node
    Node *head = *linklist
    if (nNodeDelete == 1){
        *linklist = head->next;
        free(head);
        return ;
    }

    // Traverse the list to find the (n-1)th node
    for (int i = 1; current != NULL && i < n - 1; i++) {
        current = current->next;
    }

    // If the nth node doesn't exist
    if (current == NULL || current->next == NULL) {
        printf("Position exceeds list size.\n");
        return;
    }

    Node *nextNode = current->next;
    current->next = nextNode->next;
    free(nextNode);

}