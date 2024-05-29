#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int mini=INT_MAX;
        while(j>=i){
           mini=min(mini,nums[j]);
           mini=min(mini,nums[i]);
           i++;
           j--;
        }
        return mini;
    }
};