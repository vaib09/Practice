#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

//extern int n;
int main(){
	//extern int n;
	//uint32_t num = 63;
	//int n =10;
	int *num;
        num = (int *) malloc(8);
	uint32_t x = 0;
	int count = 0;
	uint32_t y = 1;
	printf("Enter the value\n");
	scanf("%d",num);
	for(int i = 0; i<32; i++){
		x = *num & y<<i;
		if(x>0){
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
