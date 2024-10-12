#include<stdio.h>
#include<stdlib.h>

struct node {

	int data;
	struct node *next;

};

struct node* createLinkList(int len){
	struct node* head = malloc(sizeof(struct node));
	struct node* cur = head;

	for(int i=1; i<len; i++){
	cur->next = (1<(len - 1)) ? malloc(sizeof(struct node)) : NULL;
	cur = cur->next;
	}

	return head;
}

void enterValue(struct node* n){

        while(n != NULL){
                printf("ENTER THE DATA FOR LINK LIST:");
                scanf("%d",&(n->data));
		n=n->next;
        }
                
}

void display(struct node* n){
	
	while(n != NULL){
		printf("%d\n",n->data);
		n=n->next;
	}

}

int main(){

	//struct node* one;
        //struct node* two;
	//struct node* three;

	//one = (struct node*)malloc(sizeof(struct node));
	//two = (struct node*)malloc(sizeof(struct node));
	//three = (struct node*)malloc(sizeof(struct node));

	//one->data = 3;
	//one->next = two;

	//two->data = 7;
	//two->next = three;

	//three->data = 10;
	//three->next = NULL;
	int n;
	printf("ENTER THE NUMBER OF ELEMENTS IN LINKLIST");
	scanf("%d",&n);
	struct node *ll = createLinkList(n);
	enterValue(ll);
	display(ll);
	return 0;
}
