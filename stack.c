#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 256

typedef struct Stack {
    int stack_buffer[STACK_SIZE];
    int top;
} Stack;

/**
* Last In First Out
* Different stack operations:
* pop
* push
* peek
* isempty
* isfull
*/

// Stack Initialization

void stackInit(Stack *s){
    // assign top = -1 to show stack is empty
    s->top = -1;
}

// stack isEmpty
bool isEmpty(Stack *s){
    return (s->top == -1);
}

// stack is full
bool isFull(Stack *s){
    return (s->top == STACK_SIZE -1);
}

// push operation
void stackPush(Stack *s, int data){
    if(isFull(s)) {
        printf("Stack is full \n");
        return ;
    }
    s->stack_buffer[++s->top] = data;
    printf("Value %d pushed onto the stack \n",data);
}

// pop operation
int stackPop(Stack *s){
    int value = 0;
    if(isEmpty(s)) {
        printf("Stack is Empty \n");
        return -1;
    }
    int pop = s->stack_buffer[s->top];
    printf("Value %d pop from the stack \n",pop);
    s->top--;
    return pop;
}

// peek the top element of the stack
int ispeek(Stack *s){
    int value = 0;
    if(isEmpty(s)) {
        printf("Stack is Empty \n");
        return -1;
    }
    return s->stack_buffer[s->top];
}

int main(){
    Stack mainStack;
    
    // init the stack
    stackInit(&mainStack);

    //push the elements to the stack
    stackPush(&mainStack, 5);

    // pop the value from stack
    printf("popped element = %d \n",stackPop(&mainStack));

    stackPush(&mainStack, 4);
    stackPush(&mainStack, 7);

    printf("peek element = %d \n",ispeek(&mainStack));
}