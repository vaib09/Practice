#include <stdio.h>

/**
 * @breif print hello world 11 times 
 * i >>= 1; i = i >> 1
 * 10 0000 0000
 * 01 0000 0000
 * 00 1000 0000
 * 00 0100 0000
 * 00 0010 0000
 * 00 0001 0000 
 * 00 0000 1000
 * 00 0000 0100
 * 00 0000 0010
 * 00 0000 0001 
 */
int main() {
	int i = 1024;
	for(; i; i >>= 1)
		printf("HELLO WORLD \n");
	return 0;
}
