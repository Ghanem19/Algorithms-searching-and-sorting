/* *****************************************************************
 *  Algorithm_2.c
 *
 *  Author: Ahmed Nofal, Instructor at Sprints LLC.
 ******************************************************************/
#include <stdio.h>

/*********************************************************************************
*	Given a number n, write a program to print a diamond shape with 2n rows.
*
*	Input: 5
*	Output: 
*				*
*			   * *
*			  * * *
*			 * * * *
*			* * * * *
*			* * * * *
*			 * * * *
*			  * * *
*			   * *
*				*
********************************************************************************/
#include <stdio.h>

void PrintDiamond(int n)
{
	unsigned int u32_rows=0,u32_spaces,u32_noOfAstrics;
	for(u32_rows = 0;u32_rows<n; u32_rows++){

		for(u32_spaces=0; u32_spaces< n - u32_rows; u32_spaces++){
			printf(" ");
		}

		for(u32_noOfAstrics = 0; u32_noOfAstrics < u32_rows+1; u32_noOfAstrics++){
			printf("* ");
		}
		printf("\n");
	}

	for(u32_rows = 0;u32_rows<n; u32_rows++){

		for(u32_spaces=0; u32_spaces< u32_rows+1; u32_spaces++){
			printf(" ");
		}

		for(u32_noOfAstrics = 0; u32_noOfAstrics < n - u32_rows; u32_noOfAstrics++){
			printf("* ");
		}
		printf("\n");
	}

}

