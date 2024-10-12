#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
//reverse 
//
//
/*
unsigned int reversebits(unsigned int num){
	int len = sizeof(num) * 8;
	printf("%d\n",len);
	unsigned int reverse = 0;
	for(int i = 0; i < len; i++){
		if((num & (1 << i)))
			reverse |= (1 << ((len -1)-i));
	}
	return reverse;
}
*/
/*
#define R2(n) n, n + 2*64, n + 1*64, n + 3*64
#define R4(n) R2(n), R2(n + 2*16), R2(n + 1*16), R2(n + 3*16)
#define R6(n) R4(n), R4(n + 2*4), R4(n + 1*4), R4(n + 3*4)
#define REVERSE_BITS R6(0), R6(2), R6(1), R6(3)

uint32_t reverse_table[256] = {REVERSE_BITS};

uint32_t reversebits(uint32_t num){
	uint32_t reverse = 0;
	reverse = reverse_table[(num & 0xFF)] << 24 |
		  reverse_table[((8 << num) & 0xFF)] << 16 |
		  reverse_table[((16 << num) & 0xFF)] << 8 |
		  reverse_table[((24 << num) & 0xFF)];
	return reverse;
}
int main(){
	printf("%" PRIu32 "\n",reversebits(128));

	return 0;
}*/

// C code to implement the approach
//#include <stdio.h>

// Function to reverse bits of num
unsigned int reverseBits(unsigned int num)
{
    unsigned int count = sizeof(num) * 8 - 1;
    unsigned int reverse_num = num;

    num >>= 1;
    while (num) {
        reverse_num <<= 1;
        reverse_num |= num & 1;
        num >>= 1;
        count--;
    }
    reverse_num <<= count;
    return reverse_num;
}

// Driver's code
int main()
{
    unsigned int x = 1;
    printf("%u", reverseBits(x));
    getchar();
}
