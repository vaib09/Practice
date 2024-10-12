#include<stdio.h>

void swap(int *a, int *b){
        int tmp = 0;
        tmp = *a;
        *a = *b;
        *b = tmp;
}


void bubblesort(int arr[], int n){

        int j = 0;
        int tmp = 0;
        //for(j=0; j < n-1; j++){
                for(int i=j; i<=n-1; i++){
                        if(arr[i]>arr[i+1]){
                                swap(&arr[i], &arr[i+1]);
                        //      j++;            
                        }else if(arr[i]<arr[i+1]){
                              j=i;
			      break;
                        }
                }


        //}
}

void printarr(int arr[], int size){
        int i;
    for (i=0; i < size-1; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}

int main(){
        int arr[] = {23,45,76,98,9,0,1};
        int n = sizeof(arr)/sizeof(arr[0]);
        bubblesort(arr,n);
        printarr(arr,n);
        return 0;

}
                               
