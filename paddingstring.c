#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *StringPadRight(char *string, int padded_len, char *pad) {
//	char src[50];
//	char des[50];
//	strcpy(src,  string);
//	strcpy(des,  pad);
    int len = (int) strlen(string);
    if (len >= padded_len) {
        return string;
    }
    int i;
   // for (i = 0; i<padded_len-len; i++) {
        strcat(string, pad);
    //}
    return string;
}

int main(){

	char *string1;
	//string1 = (char*)(malloc(20*sizeof(char)));
	//string1 = StringPadRight("Hello", 10, "i");
	//string1 = strcat("Hello", "0");
	printf("%s",string1);
	free(string1);
	return 0;
}
