#include<stdio.h>
#include<stdlib.h>

//Basic struct of linklist
struct Node
{
	int data;
	struct Node *next;
};

//allocating the n number of linklist entred by user
void allocating_linklist(int num)
{
	struct Node *Head = NULL;
        struct Node* temp = NULL;
	for(int i = 0; i <= num; num++)
	{
		temp = (struct Node*)malloc(sizeof(struct Node));
		Head->next = temp;
		if(i==num)
		{
			temp->next = NULL;
		}
	}
}

void storing_number_linklist()
{
	
}

int main(void)
{
	int num;
	printf("Enter the number of items wanna add");
	scanf("%d",&num);
	allocating_linklist(num);
}
