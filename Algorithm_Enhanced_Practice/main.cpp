#include<iostream>
#include<vector>
#include<string>
#include"leetcode.h"
using namespace std;

int main() {
	int nums1[] = { 2,7,11,15 };
	int m = 2;
	vector<int> arr1(nums1, nums1 + sizeof(nums1)/sizeof(nums1[0]));

	vector<int> arr = Solution().twoSum(arr1,9);
	cout << arr[0] << " " << arr[1];
}