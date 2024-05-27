//using STL

#include<bits/stdc++.h>
using namespace std;


//Using STL
void nextpermutation(vector<int> &vec){
    next_permutation(vec.begin(),vec.end());
}

//Without using STL
class Solution{
    public: 
    void nextpermutation(vector<int>&nums){
int i;
int s=-1;
int r=-1;
for(int i=nums.size()-2;i>=0;i--){
    if(nums[i]<nums[i+1]){
        r=i+1;
        s=i;
        break;
    }
}
    if(r==-1){
        reverse(nums.begin(),nums.end());
    }
    else{
        for(int i=r;i<nums.size();i++){
            if(nums[i]>nums[s] && nums[i]<nums[r])
            r=i;
        }
        swap(nums[s],nums[r]);
        reverse(nums.begin()+s+1,nums.end());
    }
    }
};
