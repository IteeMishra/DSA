#include<bits/stdc++.h>
using namespace std;

//using space
class Solution{
    public:
    void recur(vector<int>&nums,vector<int> &ds,vector<vector<int>>& ans,vector<int> freq){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                ds.push_back(nums[i]);
                freq[i]=1;
                recur(nums,ds,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
vector<vector<int>> permute(vector<int> &nums){
vector<vector<int>>ans;
vector<int>freq(nums.size(),0);
vector<int>ds;
recur(nums,ds,ans,freq);

}
};

//Without using spacing and swapping elements
class Sol{
public:
void rec(vector<int> &nums,int ind, vector<vector<int>> &ans){
    if(ind==nums.size())
    {
        ans.push_back(nums);
        return;
    }
   for(int i=ind;i<nums.size();i++){
    swap(nums[i],nums[ind]);
    rec(nums,ind+1,ans);
    swap(nums[ind],nums[i]);
   }
}
vector<vector<int>> approach2(vector<int> &nums){
vector<vector<int>>ans;

rec(nums,0,ans);
return ans;
}
};
