#include <stdio.h>

/**
 * @breif loop question
 * switch statment does not have break;
 * For 1st time i=0, control goes to case 0
 * Since there is no break statment control goes to case 1 then case 5 final at case default
 * case 0 -> case 1 -> case 5 -> default = 16
 * number will be increased by 1 as per for loop condition 17
 * final default 17 + 4 = 21
 *
 */
int main() {
	int i;
	for(i=0; i<20; i++){
		switch(i) {
			case 0: i += 5;
			case 1: i += 2;
			case 5: i += 5;
			default: i += 4;
		}
		printf("Value odf i= %d \n", i);
	}
	return 0;
}

