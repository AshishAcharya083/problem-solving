#include<stdio.h>
#include<vector>
#include<iostream>

// https://leetcode.com/problems/two-sum/
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result = {};
            for(int i = 0 ; i< nums.size(); i++ ){
                for(int j = i+1 ; j< nums.size() ; j++){
                    if(nums[i] + nums[j] == target) {
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
            return result;
    }
};



int main( ){

    Solution sol;
    vector<int> vec= {3,2,4};

   vector<int> result =  sol.twoSum(vec, 6);

   for(int a : result){
    cout<<a;
   }

}
