#include <stdio.h>

/**
 * @berif build the pyramid based on the number of rows
 *    *
 *   ***
 *  *****
 * *******
 */
int main(){
	int row = 0;
	int i = 0, j = 0, k = 0;
	printf("ENTER THE NUMBER OF LINE YOU WANT TO PRINT \n");
	scanf("%d",&row);
	
	for(i=0; i<=row-1; i++){
		for(j=1; j<row-i; j++){
			printf(" ");
		}
		for(k=1; k<=(2*i+1); k++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
