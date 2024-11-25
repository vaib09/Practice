#include <stdio.h>

//link list struct
typedef struct Node{
    int data;
    Node *next;
} Node;

//creating the linklist with given size
Node *createLinkList(int linklistsize) {
    Node *head = malloc(sizeof(Node));
    Node *current = head;
    
    for(int i = 1; i < linklistsize; i++){
        current->next = (1<(linklistsize-1)) ? malloc(sizeof(Node)) : NULL;
        current = current->next;
    }

    return head;
}

//Populate the linklist
void populatelinklist(Node *linklist){

    while(linklist != NULL){
        printf("Please Enter The Data");
        scanf("%d",&linklist->data);
        linklist = linklist->next;
    }
}

//delete the node user tells which node
Node *deletenode(Node *linklist, int nodenumber){
    Node *current = linklist;
    Node *previous = Null;
    int counter = 1;
    while (current !=NULL){
        if (counter == nodenumber) {
            
        }
    }
}

