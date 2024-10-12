#include<stdio.h>
#include<string.h>

int stringtoint(char* str){

	int l=0;
	int num=0;
	int j=1;
	l = strlen(str);
	for(int i=l-1; i>=0; i--){
		num = (str[i]-48)*j+num;//ascii("0") = 48 ascii("1") = 49
		j = j*10;	
	}
	return num;
}

int main(){
	char string[] = "123454";
	int num;
	num = stringtoint(string);
	printf("%d",num);
}
