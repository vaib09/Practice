#include <stdio.h>
#include <stdlib.h>

/**
* Circular buffer storing sensors value
* Include initalization, adding and reading next value
*
*/

#define BUFFER_SIZE 10

typedef struct {
    int buffer[BUFFER_SIZE];
    int head;
    int tail;
    int size;
}  CircularBuffer;

void cb_init(CircularBuffer *cb){
    cb->head = 0;
    cb->tail = 0;
    cb->size = 0;
}

void cb_adding(CircularBuffer *cb, int val){
    // Overwriting oldest data
    if(cb->size == BUFFER_SIZE){
        cb->tail = (cb->tail + 1) % BUFFER_SIZE;
        printf("inside cb_adding cd->tail inside if %d \n",cb->tail);
        cb->size--;
        printf("inside cb_adding inside if %d \n",cb->size);
    }
    cb->buffer[cb->head] = val;
    cb->head = (cb->head + 1) % BUFFER_SIZE;
    printf("inside cb_head  %d \n",cb->head);
    cb->size++;
    printf("inside cb_adding %d \n",cb->size);
}

int cb_reading(CircularBuffer *cb){
    //buffer empty
    if(cb->size == 0){
        return -1;
    }
    int value = cb->buffer[cb->tail];
    cb->tail = (cb->tail + 1) % BUFFER_SIZE;
    printf("inside cb_reading cd->tail inside if %d \n",cb->tail);
    cb->size++;
    return value;
}

int main(){
    CircularBuffer Circular;
    cb_init(&Circular);
    for(int i=0; i<27; i += 2){
        cb_adding(&Circular, i);
    }

    for(int i=0; i<=13; i++){
        int value = cb_reading(&Circular);
        printf("%d - cd_read /n",value);
    }
    //printf("%d - cd_read /n",cb_reading(&Circular));
}