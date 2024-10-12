#include<stdio.h>
#include<stdlib.h>

//array and it's size
static int *array;
static int array_size;

int main(){

	printf("enter the size of the array \n");
	scanf("%d",&array_size);

	//allocating the dynamic memory to the array
	array = (int *)malloc(array_size * sizeof(int));
	//always check malloc return value
	if (array == NULL) {
        	printf("Memory allocation failed\n");
        	return 1;
    	}

	for (int i=0; i<array_size; i++) {
		array[i] = i+1;
	}	

        for (int i=0; i<array_size; i++) {
                printf("array[%d] = %d \n",i,array[i]);
        }

	//resize the array
        printf("enter the new size of the array \n");
        scanf("%d",&array_size);

        //allocating the dynamic memory to the array
        array = (int *)realloc(array, array_size * sizeof(int));
        if (array == NULL) {
                printf("Memory allocation failed\n");
                return 1;
        }


        for (int i=0; i<array_size; i++) {
                array[i] = i+1;
        }

        for (int i=0; i<array_size; i++) {
                printf("new array elements array[%d] = %d \n",i,array[i]);
        }

	//free allocated memory when done
	free(array);
	return 0;
}
