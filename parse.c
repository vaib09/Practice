#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int g=0;
char* str2[80];
char pos[50];
char str[80] = "S1-T:36.5-H;100-L:50";

void parseString(char str1[], int *i,int* e, char pos1[] ){
int a=1;
int b=0;

    while((*i)<=(*e)){

        while(str1[*i]=='T'||str1[*i]=='H'||str1[*i]=='L'||str1[*i]==','||str1[*i]=='<'||str1[*i]=='>'||str1[*i]=='?'||str1[*i]=='/'||str1[*i]=='|'||str1[*i]==']'||str1[*i]=='['||str1[*i]=='{'||str1[*i]=='}'||str1[*i]==':'||str1[*i]==';'||str1[*i]==' '||str1[*i]=='"'||str1[*i]=='='||str1[*i]=='_'||str1[*i]==')'||str1[*i]=='('||str1[*i]=='*'||str1[*i]=='&'||str1[*i]=='^'||str1[*i]=='%'||str1[*i]=='#'||str1[*i]=='@'||str1[*i]=='!'||str1[*i]=='~'||str1[*i]=='`'){
            a=1;
            b++;
            str1[*i]='\0';
            (*i)++;

        }
        (*i)++;
        if(a==1){
            pos1[g]=b;
            g++;
        }a++;
        b++;
    }
}

//saperating the argunments
//char* straddress(char str1[], char* pos, int* k,int *g){
//    if(*k<=*g){
//        return &str1[pos[*k]];
//   }else return "wrong";
//}

//storing the argunments saperately
//void storeArgu(){
//    int i;
//    for(i=0;i<=g;i++){
//    str2[i]=straddress(str,pos,&i,&g);
//    }
//}


//converting the string to integer
//int getInt(int k){
//    int i;
    //i=strtol(str2[k],NULL,10);
//    i=atoi(str2[k]);
//    return (i);
//}
//converting the string to float
//float getFloat(int k){
//    float i;
//    i=atof(str2[k]);
//    return (i);
//}


int main(void){
	int i=0;
	int e = sizeof(str);
	parseString(str, &i, &e, pos);
	printf("%s",str+pos[1]);
	return 0;
}
