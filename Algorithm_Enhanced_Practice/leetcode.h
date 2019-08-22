#pragma once
#ifndef LEETCODE
#include<algorithm>
#include<queue>
#include<iostream>
#include<stdlib.h>
#include<assert.h>
using namespace std;


class Solution {
public:

	/*11. Container With Most Water*/
	//int maxArea(vector<int>& height) {
	//	int i = 0;
	//	int r = height.size()-1;
	//	long long max = -1;
	//	while (i<r)
	//	{
	//		long long area = (r - i)*min(height[r], height[i]);
	//		if (area > max) max = area;
	//		if (height[r] > height[i]) i++;
	//		else r--;
	//	}
	//	return max;
	//}

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

	/*75. Sort Colors*/
	//void sortColors(vector<int>& nums) {
	//	const int n = 3;
	//	int count[n] = { 0 };
	//	for (int i = 0;i < nums.size();i++) {
	//		count[nums[i]]++;
	//	}
	//	int index = 0;
	//	for (int i = 0;i < n;i++) {
	//		for (int j = 0;j < count[n];j++) nums[index++] = i;
	//	}	
	//}
	//void sortColors(vector<int>& nums) {
	//	int zero = -1;  //nums[0 .. zero] == 0
	//	int two = nums.size(); // nums[two..-n-1] == 2
	//	for (int i = 0;i < two;) {
	//		if (nums[i] == 1)
	//			i++;
	//		else if (nums[i] == 2) {
	//			two--;
	//			swap(nums[i], nums[two]);
	//		}
	//		else {// nums[i] == 0
	//			zero++;
	//			swap(nums[zero], nums[i]);
	//			i++;
	//		}
	//	}
	//}

	/*80. Remove Duplicates from Sorted Array II*/
	/*int removeDuplicates(vector<int>& nums) {
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
	}*/

	/*88. Merge Sorted Array*/
	/*

	/*125. Valid Palindrome*/
	//bool isPalindrome(string s) {
	//	int p = 0;
	//	int r = s.length() - 1;
	//	while (p<r)
	//	{
	//		if ((s[p] >= 'A'&& s[p] <= 'Z') || (s[p] >= 'a'&&s[p] <= 'z') || (s[p] >= '0'&&s[p] <= '9')) {
	//			if ((s[r] >= 'A'&& s[r] <= 'Z') || (s[r] >= 'a'&&s[r] <= 'z') || (s[r] >= '0'&&s[r] <= '9')) {
	//				char c = s[p]<'A'?s[p]:(s[p] >= 'a' ? s[p] : s[p] - 'A' + 'a');
	//				char k = s[r]<'A' ? s[r] : (s[r] >= 'a' ? s[r] : s[r] - 'A' + 'a');
	//				if (c != k) {
	//					return false;
	//				}
	//				else {
	//					p++;
	//					r--;
	//				}
	//			}
	//			else {
	//				r--;
	//				continue;
	//			}
	//		}
	//		else {
	//			p++;
	//		}
	//	}
	//	return true;
	//}

	/*167. Two Sum II - Input array is sorted*/
	//vector<int> twoSum(vector<int>& numbers, int target) {
	//	
	//	assert(numbers.size() >= 2);
	//	int l = 0, r = numbers.size() - 1;
	//	while (l < r)
	//	{
	//		if (numbers[l] + numbers[r] == target) {
	//			int res[2] = { l + 2, r + 1 };
	//			return vector<int>(res, res + 2);
	//		}
	//		else if (numbers[l] + numbers[r] < target) l++;
	//		else r--; //numbers[l] + numbers[r] > target
	//	}

	//	throw invalid_argument("The input has no solution.");
	//}
	vector<int> twoSum(vector<int>& numbers, int target) {
	
		for (int i = 0;i < numbers.size() - 1;i++) {
			int l = i+1, r = numbers.size() - 1;
			while (l <= r) {
				// int mid = (l + r) / 2;
				int mid = l + (r - l) / 2;
				if (numbers[mid] == target-numbers[i])
				{
					int arr[] = { i+1, mid+1 };
					return vector<int>(arr,arr+2);
				}
					
				if (target- numbers[i] < numbers[mid])
					r = mid - 1;
				else
				{
					l = mid + 1;
				}
			}
		}
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

	/*344. Reverse String*/
	//void reverseString(vector<char>& s) {
	//	int p = 0;
	//	int r = s.size()-1;
	//	while (p < r)
	//	{
	//		swap(s[p++], s[r--]);

	//	}
	//}

	/*345. Reverse Vowels of a String*/
	//string reverseVowels(string s) {
	//	int p = 0;
	//	int r = s.length()-1;
	//	while (p < r)
	//	{	
	//		if (s[p] == 'a' || s[p] == 'A' || s[p] == 'e' || s[p] == 'E' || s[p] == 'i' || s[p] == 'I' || s[p] == 'o' || s[p] == 'O'
	//			|| s[p] == 'u' || s[p] == 'U')
	//			if (s[r] == 'a' || s[r] == 'A' || s[r] == 'e' || s[r] == 'E' || s[r] == 'i' || s[r] == 'I' || s[r] == 'o' || s[r] == 'O'
	//				|| s[r] == 'u' || s[r] == 'U')
	//				swap(s[p++], s[r--]);
	//			else
	//				r--;
	//		else
	//			p++;

	//	}
	//	return s;
	//}

	/*215. Kth Largest Element in an Array*/
//	int _partition(vector<int>& arr, int l, int r) {
//		int temp = arr[l];
//		int i = l + 1, j = r;
//		while (true)
//		{
//			while (i <= r && arr[i] > temp)i++;
//			while (j >= l+1 && arr[j] < temp)j--;
//			if (i > j) break;
//			swap(arr[i], arr[j]);
//			i++;
//			j--;
//		}
//
//		swap(arr[l], arr[j]);
//
//		return j;
//	}
//	int __quickSort(vector<int>& arr, int l, int r, int k) {
//		int p = _partition(arr, l, r);
//		if (p != k-1) {
//			if(p > k-1)
//				return __quickSort(arr, l, p - 1, k);
//			else return __quickSort(arr, p + 1, r, k);
//		}
//		else
//			return arr[p];
//	}
//
//	int findKthLargest(vector<int>& nums, int k) {
//		return __quickSort(nums, 0, nums.size()-1, k);
//	}


};

#endif // !LEETCODE
