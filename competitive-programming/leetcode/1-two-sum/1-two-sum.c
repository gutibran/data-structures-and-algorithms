/***********************************************************************
 * File: 1-two-sum.c
 * Description: My solution to https://leetcode.com/problems/two-sum/description/.
 * Author: Brandon Gutierrez
 * Purpose:
 * Usage:
***********************************************************************/
#include <stdio.h>
#include <stdbool.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* solution = (int *)malloc(2 * sizeof(int)); // create an array to store the solution
    *returnSize = 2; // define the size of the array that will store the solution
	// iterate through the input array of numbers
    for (int i = 0; i < numsSize; i++) {
		// calculate what the addend would be for the current numbers "twosum"
        int addend = target - nums[i];
		// iterate through the input array of numbers to check if the addend is in the array of numbers
        for (int j = 0; j < numsSize; j++) {
			// check if the current number is equal to the addend and that the addend's index is not the same addend in the outer loop
            if (nums[j] == addend && j != i) {
                solution[0] = i; // store the index of outer loop addend
                solution[1] = j; // store the index of the inner loop addend
            }
        }
    }
    return solution; // return the array that contains the indices of the addends that make up the "twosum"
} 
