#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
         vector<vector<int>>ans;
         sort(arr.begin(),arr.end());

         for(int i=0;i<arr.size();i++){
            int f=arr[i][0];
            int s=arr[i][1];

            if(ans.empty()==false && s<=ans.back()[1])
            continue;

            for(int j=i+1;j<arr.size();j++){
                if(arr[j][0]<=s){
                    s=max(s,arr[j][1]);
                }
                else
                break;
            }
            ans.push_back({f,s});
         }
         return ans;

    }
};