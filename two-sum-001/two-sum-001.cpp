/*************************************************************************
	> File Name: two-sum-001.cpp
	> Author: clearScreen
	> Mail: clearScreen@163.com 
	> Created Time: Fri 04 Sep 2015 10:10:50 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
	public:
	   vector<int> twoSum(vector<int>& nums, int target) {
 	        vector<int> vec;
	        for(int i = 0; i < nums.size(); ++i){
 		            int sub = target - nums[i];
		            auto result = find(nums.cbegin(),nums.cend(),sub);
 		            if(*result){
						int x = result - nums.begin() + 1;
						if(i+1<x){
							vec.push_back(i+1);
							vec.push_back(x);
						}
						else{
							vec.push_back(x);
							vec.push_back(i+1);
						}
		            }
  	        }
		        
	        return vec;
							        
	    }

};

int main(int argc, char** argv){
	Solution sl;
	vector<int> test = {0,2,4,6,8,10,12,14}, result;
	result = sl.twoSum(test, 26);
	for(auto &x : result)
		cout << x << " ";
	cout << endl;
	return 0;

}
