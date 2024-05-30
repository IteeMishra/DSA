//Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     unordered_map<int,int>mpp;
     for(int i=0;i<nums.size();i++)
     mpp[nums[i]]++;

        for(int i=0;i<nums.size()-1;i++){
                  if(mpp[nums[i]]<2)
              continue;
            for(int j=i+1;j<nums.size();j++){
          
                if(nums[i]==nums[j] && abs(i-j)<=k)
                return true;

            }
        }
        return false;
    }
};
