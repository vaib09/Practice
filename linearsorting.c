#include <stdio.h>


void LinerSorting(int arr[], int array_length) {

	for(int i=0; i<array_length; i++){
		int min = i;
		for(int j=i+1; j<array_length; j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
}



int main() {

	int array[8] = {4,2,7,5,0,1,4,6};
	LinerSorting(array,8);
	
	for(int i=0; i<8; i++){
		printf("array[%d]=%d \n",i,array[i]);
	}
	return 0;
}
