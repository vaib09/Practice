#include<stdio.h>

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

int maxArea(int* height, int heightSize){

    int area = 0;
    //area = (int*)malloc(sizeof(int));
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = heightSize; i>=0; i--){
        for(int j = 0; j < i; j++ ){
            b = min(height[i], height[j]);
            c = i-j;
            area = b * c;
            if(area >a){
                a = area;
            }
        }
    }
          return a;
}

int main(){

	int a = 0;
	int str[] = {1,2,4,6,9,4,2};
	a = maxArea(str,6);
	printf("%d",a);
	return 0;
}
