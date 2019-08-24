#include<iostream>
#include<vector>
#include<string>
#include<map>
#include"leetcode.h"
using namespace std;

int main() {
	int nums1[] = { 2,7,11,15 };
	//int m = 2;
	vector<int> arr1(nums1, nums1 + sizeof(nums1)/sizeof(nums1[0]));
	vector<vector<int> >arr2;
	arr2.push_back(vector<int>(0, 0));
	arr2.push_back(vector<int>(1, 0));
	arr2.push_back(vector<int>(2, 0));
	//vector<int> arr = Solution().twoSum(arr1,9);
	//cout << arr[0] << " " << arr[1];
	string s = "aa";
	string p = "bb";
	cout << Solution().numberOfBoomerangs(arr2);

}