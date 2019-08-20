#include<iostream>
#include<vector>
#include"leetcode.h"
using namespace std;

int main() {
	int arr[] = { 0,0,1,1,1,1,2,3,3 };
	vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));
	cout << Solution().removeDuplicates(vec);
	
	for (int i = 0;i < vec.size();i++)
		cout << vec[i] << " ";
	cout << endl;
}