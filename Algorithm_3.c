/* *****************************************************************
 *  Algorithm_3.c
 *
 *  Author: Ahmed Nofal, Instructor at Sprints LLC.
 ******************************************************************/

/*********************************************************************************
*	Given a number, print floor of 5’th root of the number.
*	
*	Input  : n = 32
*	Output : 2
*	2 raise to power 5 is 32
*
*	Input  : n = 250
*	Output : 3
*	Fifth square root of 250 is between 3 and 4
*	So floor value is 3.
********************************************************************************/ 
#include <stdio.h>
int Linear_floorRoot5(int n)
{
	unsigned int root5 = 0;
	while(n>0){
		n /= 5;
		root5++;
	}

return root5 - 1;
}

void main (void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("%d ", Linear_floorRoot5(250));

}

