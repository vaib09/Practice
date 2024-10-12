/**
 * Various algorithm for sorting and array
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>

int *bubble_sorting(int arr[], const int size_array) {
	//arr = (int *)malloc(size_array * sizeof(int));
	for(int i=0; i<size_array; i++) {
        	for(int j=0; j<size_array-i; j++) {
                        if(arr[j]<arr[j+1]) {
                                // Swap the elements
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                        }
                }
        }

	return arr; 
}

int main() {
	
	int array[7] = {5,3,2,7,10,9,3};
	int *array_1; //= (int *)malloc(7 * sizeof(int));
	
	array_1 = bubble_sorting(array, 7);
	for(int k=0; k<7; k++) {
		printf("array_1[%d] = %d \n",k,array[k]);
	}

	//free(array_1);
	//free(bubble_sorting);
	return 0;
}
