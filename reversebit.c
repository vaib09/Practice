#include<stdio.h>




//0100111
//1<<
//x = 0x0a0b0c0d
//result = 0x0d0c0b0a
//
//bool func(int *ptr, bool* flag){
//	if(pat != NULL)
//	if(*flag == TRUE ){
//		
//		if(*ptr == 4){
//			print("");
//		}else print();
//	}else 
//	return false;
//return true;
//}
uint32_t reverseBit(uint32_t num){
	uint32_t tmp = 0;
	int i = 1;
	//while(i !=4){	
		tmp = 1<<num;
		//tmp1 = (0x0000111100000000... & num)
		//tmp2 = (0x...00000000000001111 & num)
		//i++;
		// (0xff000000 & num>>24 |( 0x000000ff & num << 24 ( 0x00ff0000 & num>>8)|(0x0000ff00 & num <<8)
		//tmp4 = 0x0000ff00 & num
		//tmp3>>8
		//tmp4<<8
		//tmp1|tmp2|tmp3|tmp4
		//
		//
	//}
	


}

int main(){


}
struct node{
	int data;
	struct node* next;

}

struct value{
	uint32_t val1;
	uint32_t val2;
	uint32_t val3;
}
