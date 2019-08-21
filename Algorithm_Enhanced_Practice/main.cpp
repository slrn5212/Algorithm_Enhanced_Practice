#include<iostream>
#include<vector>
#include<string>
#include"leetcode.h"
using namespace std;

int main() {
	int nums1[] = { 1,8,6,2,5,4,8,3,7 };
	int m = 3;
	int nums2[] = {2, 5, 6};
	int n =3;
	vector<int> arr1(nums1, nums1 + sizeof(nums1)/sizeof(nums1[0]));
	vector<int> arr2(nums2, nums2 + 3);

	string s = "A man, a plan, a canal: Panama";
	string s1 = "0p";
	cout<< Solution().maxArea(arr1);
}