/*********************************************************************************
 *
 *  problem_two.c
 *  Author: Ahmed Nofal, Instructor at Sprints LLC 
 *
 ********************************************************************************/


/****************************[Problem Description]*********************************
 *
 * Modify the Binary Search algorithm to find an element in a circularly sorted
 * array.
 * The array is sorted in an ascending order and rotated in clockwise
 *
 * Sample Input: arr = [8, 9, 10, 2, 5, 6]
 * 				 target = 10
 * Sample Output: The number is found at index 2
 *
 ********************************************************************************/
#include <stdio.h>
#include "problem_two.h"
#include "problem_one.h"
/*********************************************************************************
 *
 * Function: BinarySearch
 *
 * @param: arr[], Array that the function should find the number in.
 * @param: arr_size, Size of the array
 * @param: element_to_be_found, The elment to be searcher for
 * @return: int, the index of the element to be found
 ********************************************************************************/
int binarySearch(int arr[], int arr_size, int target){
	unsigned int start = 0,end = arr_size-1,mid;
		while(end >= start){
			mid = start + (end - start)/2;
			if(target == arr[mid]){
					return mid;
			}

			else if(target>arr[mid]){
					start = mid +1 ;
			}

			else{
					end  = mid -1;
			}

		}
		return -1;


}
/*********************************************************************************
 *
 * Function: circularArraySearch
 *
 * @param: arr[], Array that the function should find the number in.
 * @param: arr_size, Size of the array
 * @param: element_to_be_found, The elment to be searcher for
 * @return: int, the index of the element to be found
 *
 * Description: Function to find the number of times the array is rotated, if the
 * element was not found it should return -1
 *
 ********************************************************************************/
int circularArraySearch(int arr[], int arr_size, int element_to_be_found)
{

	unsigned int u32_loopIndex,rotateIndex = 0,ptru32_arrayAddress = (int*)arr;
	rotateIndex = findRotationCount(arr,arr_size);

	if(element_to_be_found>=arr[0]){
		//binary search on the array until value of rotationIndex
		return binarySearch(arr,rotateIndex,element_to_be_found);
	}
	else{
		//pass the array started after the rotation pivot and the return location added to the rotation index
		return binarySearch( &arr[rotateIndex],arr_size - rotateIndex ,element_to_be_found) + rotateIndex;
	}

}

/* circularArraySearch_test */
void circularArraySearch_test(void)
{
	int A[] = {9, 10, 2, 5, 6, 8};
	int target = 8;
	int n = sizeof(A)/sizeof(A[0]);
	int index = circularArraySearch(A, n, target);
	if(index != -1){
		printf("Element found at index %d", index);
	}
	else{
		printf("Element not found in the array");
	}

}
