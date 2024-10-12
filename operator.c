#include<stdio.h>

int main(){

	int a, b, total, total1 = 0;
	a = 6;
	b = 10;
	total = a++ + b++;
	//total1 = ++b;

	printf("a = %d \ntotal = %d", a, total);
	printf("\nb = %d \ntotal1 = %d", b, total1);
}
