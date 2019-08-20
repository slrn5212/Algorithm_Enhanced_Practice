#pragma once
#ifndef LEETCODE
#include<algorithm>
#include<queue>
#include<iostream>
#include<stdlib.h>

using namespace std;


class Solution {
public:
	/*	26. Remove Duplicates from Sorted Array	*/
	//int removeDuplicates(vector<int>& nums) {
	//	int length = 0;
	//	int temp = 99999;
	//	for (int i = 0;i < nums.size();i++) {
	//		if (nums[i] != temp) {
	//			nums[length++] = nums[i];
	//			temp = nums[i];
	//		}
	//	}
	//	return length;
	//}

	/*	27. Remove Element*/
	//int removeElement(vector<int>& nums, int val) {
	//	int k = 0;
	//	for (int i = 0;i < nums.size();i++) {
	//		if (nums[i] == val) {
	//			continue;
	//		}
	//		else {
	//			if (k != i) {
	//				nums[k] = nums[i];
	//			}
	//			k++;
	//		}
	//	}
	//	return k;
	//}

	/*80. Remove Duplicates from Sorted Array II*/
	int removeDuplicates(vector<int>& nums) {
		int k = 0;
		bool t = true;
		int temp = 99999;
		for (int i = 0;i < nums.size();i++) {
			if (nums[i] == temp) {
				if (t == true) continue;
				else {
					t = true;
					if (k != i) {
						nums[k] = nums[i];
					}
					k++;
				}
			}
			else {
				t = false;
				temp = nums[i];
				if (k != i) {
					nums[k] = nums[i];
				}
				k++;
			}
		}

		return k;
	}
	/*	283. Move Zeroes	*/
	
	//void moveZeroes(vector<int>& nums) {
	//	int i = 0;
	//	for (int j = 0;j < nums.size();j++) {
	//		if (nums[j] != 0) {
	//			nums[i++] = nums[j];
	//		}
	//	}
	//	for (;i < nums.size();i++) {
	//		nums[i] = 0;
	//	}
	//}

	//void moveZeroes(vector<int>& nums) {
	//	int i = 0;
	//	for (int j = 0;j < nums.size();j++) {
	//		if (nums[j] != 0) {
	//			if (i != j) {
	//				int temp = nums[i];
	//				nums[i++] = nums[j];
	//				nums[j] = temp;
	//			}
	//			else //i==k
	//				i++;
	//		}
	//	}
	//}


	//
};

#endif // !LEETCODE
