#include <stdio.h>
#include <stdlib.h>

//linklist struct 
struct node{
	int data;
	struct node *next; 
};

struct node *CreateLinklist(int length){
	struct node *head = malloc(sizeof(struct node));
	//struct node *tail = null;
	struct node *curr = head;

	for(int i=1; i<length; i++){
		curr->next = (1 <= (length - 1)) ? malloc(sizeof(struct node)) : NULL;
		curr = curr->next;
	}
	return head;
}

void EnterElements(struct node *n){
	while(n != NULL){
		printf("ENTER THE DATA FOR LINK LIST\t");
                scanf("%d",&(n->data));
		n = n->next;
	}
}

void display(struct node* n){

	while(n != NULL){
		printf("%d\n",n->data);
		n=n->next;
	}

}

int main(){

	int n,m,data_comp,temp;
	printf("ENTER THE NUMBER OF ELEMENTS FOR FIRST LINKLIST\t");
	scanf("%d",&n);
	struct node *ll1 = CreateLinklist(n);
	EnterElements(ll1);
        printf("ENTER THE NUMBER OF ELEMENTS FOR SECOND LINKLIST\t");
        scanf("%d",&m);
	struct node *ll2 = CreateLinklist(m);
	EnterElements(ll2);
	display(ll1);
	display(ll2);

	return 0;
}
