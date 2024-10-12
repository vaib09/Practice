#include<stdio.h>
#include<string.h>


/*char* strpar(cah* strp){




}*/


int a_to_i(char *str){
  int l = 0;
  l = strlen(str);
  int j = 1;
  int num = 0; 
	int minus = 1;

  for(int k = 0; k<l;k++){
  	//int minus=1;
  	if(str[k]=='-'){
		minus = minus * -1;
		//break;
	}//else //minus =1;
  }
  if(str[0] == '-' | (str[0]>='0' & str[0]<='9')){
 		
	  for(int i = l-1; i>=1;i--){
		num =((str[i] - 48 )* j) + num;
		j = j*10;
 
		}
  }
 return (num * minus);


}

int main(){

	char str1[] = "-568";
	int num1 = a_to_i(str1);
	printf("%d",num1);

}
