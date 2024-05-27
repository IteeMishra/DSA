#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<vector<int>> ans;
void helper(vector<int>& candidates, int target, int curSum , vector<int> temp, int i){
if(curSum>target){
    return ;
}
if(i==candidates.size()){
    if(curSum==target){
        ans.push_back(temp);
    }
    return ;
}
curSum=curSum+candidates[i];
temp.push_back(candidates[i]);
helper(candidates , target, curSum ,temp, i );

temp.pop_back();
curSum=curSum-candidates[i];
helper(candidates, target , curSum,temp, i+1);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(candidates, target , 0 , temp, 0);
        return ans; 
    }
};