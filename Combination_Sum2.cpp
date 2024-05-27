#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void recur(vector<int>& num,int target,vector<int> &ds,vector<vector<int>>&ans,int ind){

    //base case
    if(target==0){
    ans.push_back(ds);
return;
}
for(int i=ind;i<num.size();i++){
    if(num[i]>target)break;
    if(i>ind && num[i]==num[i-1]){
        continue;
    }
    ds.push_back(num[i]);
    recur(num,target-num[i],ds,ans,i+1);
    ds.pop_back();
}
}
    vector<vector<int>> combinationSum2(vector<int>& num, int target) {
        vector<vector<int>>ans;
sort(num.begin(),num.end());
vector<int>ds;
recur(num,target,ds,ans,0);
return ans;
    }
};