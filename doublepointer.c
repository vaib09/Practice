#include <stdio.h>

int main(){
    int val = 7;
    int *ptr = &val;
    int **dptr = &ptr;

    printf("val[%p]: val = %d \n",(void*) &val, val);
    printf("ptr[%p]: ptr = %p  *ptr  = %d\n",(void*) &ptr, (void*) ptr, *ptr);
    printf("dptr[%p]: dptr = %p *dptr = %p **dptr = %d \n",(void*)  &dptr, (void*) dptr, (void*) *dptr, **dptr);
    printf("\n");
    return 0;
}