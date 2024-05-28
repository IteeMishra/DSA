

//Given a list arr of n integers, return sums of all subsets in it. Output sums can be printed in any order.

#include<bits/stdc++.h>
using namespace std;
class Solution {

  public:
  void recur(vector<int>&arr,vector<int>&ans,int ind,int sum){
      if(ind==arr.size())
      {
          ans.push_back(sum);
          return;
      }
      recur(arr,ans,ind+1,sum+arr[ind]);
      
      recur(arr,ans,ind+1,sum);
  }
  
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> ans;
        recur(arr,ans,0,0);
        return ans;
    }
};