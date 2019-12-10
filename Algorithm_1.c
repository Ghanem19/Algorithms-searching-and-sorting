/* *****************************************************************
 *  Algorithm_1.c
 *
 *  Author: Ahmed Nofal, Instructor at Sprints LLC.
 ******************************************************************/

/******************************************************************
 * Given an array of integers, return indices of
 * the two numbers such that they add up to a specific target.
 * You may assume that each input would have exactly one solution,
 * and you may not use the same element twice.
 ***********
 * example *
 ***********
 * 		input: [10,2,23,4,5], target = 6
 * 		output: [1,3]
 *
 * *****************************************************************/


int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	static int asu32_output[2];
	unsigned int u32_arraIndex;
	*returnSize = 2;
	unsigned char  ua8_numberTable[10] = {0};
	unsigned int   ua32_indexsOfelements[10] = {0} ;
	for (u32_arraIndex = 0; u32_arraIndex < numsSize; u32_arraIndex++) {
	    	ua32_indexsOfelements[nums[u32_arraIndex] ] = u32_arraIndex;
	    	ua8_numberTable[target - nums[u32_arraIndex]] = 1;

	    	if(ua8_numberTable[nums[u32_arraIndex]] == 1){
	    		asu32_output[1] = u32_arraIndex;
	    		asu32_output[0] = ua32_indexsOfelements[target - nums[u32_arraIndex]];
	    	}

	    }
	return asu32_output;
}

