#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    sort(nums.begin(),nums.end());
    //    int i=0;
    //    int j=nums.size()/2; 
    //    while(j<nums.size()){
    //     if(nums[i]==nums[j])
    //     return nums[i];
    //     else{
    //         i++;
    //         j++;
    //     }
    //    }
    //    return 0;
    int c=0;
    int ele;
    for(int i=0;i<nums.size();i++){
        if(c==0){
            ele=nums[i];
            c=1;
        }
        else if(nums[i]==ele){
            c++;
        }
        else
        c--;
    }
    return ele;
    }
};