#include<stdio.h>


char * intToRoman(int num){

    char* c;
    char d[20];
    int i=0;
    c=d;
   //while(num != 0)
    //{

        if (num >= 1000 )       // 1000 - m
        {
           c[i] ='M';
	   c[i+1] = 'C';
           i++;
	   num -= 1000;
            
        }

        /*else if (num >= 900 )   // 900 -  cm
        {
           c[i]= 'C';
	   c[i+1] = 'M';
           i++;
	   num -= 900;
            
        }

        else if (num >= 500 )   // 500 - d
        {
           c[i] = 'D';
           i++;
	   num -= 500;
           
        }

        else if (num >= 400 )   // 400 -  cd
        {
           c[i] = 'C';
	   c[i+1] = 'D';
           i++;
	   num -= 400;
	   //i++;
        }

        else if (num >= 100 )   // 100 - c
        {
           c[i] = 'C';
           i++;
	   num -= 100;
	   //i++;
        }

        else if (num >= 90 )    // 90 - xc
        {
           c[i] = 'X';
	   c[i+1] = 'C';
           i++;
	   num -= 90;
	   //i++;
        }

        else if (num >= 50)    // 50 - l
        {
           c[i] = 'L';
           i++;
	   num -= 50;
	   //i++;
        }

        else if (num >= 40)    // 40 - xl
        {
           c[i] = 'X';
	   c[i+1] = 'L';
           i++;
           num -= 40;
        }

        else if (num >= 10)    // 10 - x
        {
           c[i] = 'X';
           i++;
           num -= 10;
        }

        else if (num >= 9)     // 9 - ix
        {
           c[i] = 'I';
	   c[i+1] = 'X';
           i++;
           num -= 9;
        }

        else if (num >= 5)     // 5 - v
        {
           c[i] = 'V';
           i++;
           num -= 5;
        }

        else if (num >= 4)     // 4 - iv
        {
           c[i] = 'I';
	   c[i+1] = 'V';
           i++;
           num -= 4;
        }

        else if (num >= 1)     // 1 - i
      // else
        {
           c[i] = 'I';
           i++;
           num -= 1;
        }*/

    //}

    return c;
}

int main(){
	char* ch;
	ch = intToRoman(1098);
	for(int i=0; ch[i]!=NULL; i++){
	printf("%c",ch[i]);
	}
	return 0;
}
