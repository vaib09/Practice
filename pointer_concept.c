#include<stdio.h>

int main(){
	
	int **a = 0;
	int *c = 0;
	int b;
	b = 12;
	c = &b;
	a = &c;
	printf("Value of *a = %d value **a = %d value of c = %d\n",*a,**a,c);
	return 0;
}
