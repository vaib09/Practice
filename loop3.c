#include <stdio.h>

/**
 * @breif loop question
 * During 1st itteration when control reaches to continue. 
 * Continue will send the control to the while loop.
 * It keep going back and forth like this until i >= 0.
 * Once i = 0 control goes to the break and it will kick out of while loop.
 * Vaibhav will never get printed. 
 *
 */
int main() {
        int i = -5;
	while(i <= 5){
		if(i >= 0)
			break;
		else{
			i++;
			continue;
		}
		printf("Vaibhav \n");
	}
        return 0;
}

