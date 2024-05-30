//Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

//You must implement a solution with a linear runtime complexity and use only constant extra space.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i+2<nums.size() && nums[i]==nums[i+2])
            i=i+2;
            else 
            return nums[i];
        }
        return -1;
    }
};
