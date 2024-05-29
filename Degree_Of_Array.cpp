//Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.

//Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxi=0;
        int num;
        for(auto i: mpp){
            if(i.second>=maxi){
                maxi=i.second;
            }
        }
        vector<int>vec;
        for(auto i: mpp){
            if(i.second==maxi){
                vec.push_back(i.first);
            }
        }

        int ma=0;
        int ans=INT_MAX;
        for(int i=0;i<vec.size();i++){
            ma=0;
            maxi=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==vec[i]){
            maxi=j;
            break;
            }
            
        }
         for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==vec[i]){
            ma=j;
            break;
            }
        }
        ans=min(ans,ma-maxi+1);

       
    }
    return ans;
    }
};