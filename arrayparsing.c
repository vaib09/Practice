#include<stdio.h>
#include<string.h>

int myAtoi(char * s){

    int n = 0;
    int sign = 1;
    int a = 0;
    int i = 0;

       int l=0;
       l = strlen(s);
       while(s[i] != NULL){

           if(!(s[i]>='0' & s[i]<='9')){
               if(s[i] == '-'){
                    sign = - 1;
                }
		a++;
		i++;
           }else{
	   	s[i-a] = s[i];
           	i++;
	   	
	   }
       }
       s[l-a] = NULL;
       for (int c = 0; s[c] != '\0'; c++) {
           n = n * 10 + s[c] - '0';
       }
       return n;
}

int main(){
	
	char string[] = "12321";
	int j = myAtoi(string);
	printf("%d\n",j);
	return 0;


}
