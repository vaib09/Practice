#include <stdio.h>
#include<string.h>
int main(){
	char bob[100000];
	char Alice[100000];
	char fin[100000];
	int a = 0;
	printf("Enter the BOB liks and dislike\n");
	scanf("%s", bob); 
	//printf("Enter the BOB liks and dislike %s",bob);
	printf("Enter the Alice liks and dislike\n");
	scanf("%s", Alice);  
	//printf("Enter the BOB liks and dislike %s",bob);           			// Reading input from STDIN
	if(strlen(bob) == strlen(Alice)){
		for(int i = 0; i< strlen(bob); i++){
			fin[i] = (bob[i]) ^ (Alice[i]);
			if(fin[i] == 0){
				a++;
			}
		} 
	}
	printf("%d",a);
	return 0;
}
