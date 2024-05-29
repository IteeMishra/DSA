#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       vector<int>ans;

       vector<int>a;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            a.push_back(grid[i][j]);
        }
       } 
       sort(a.begin(),a.end());
       for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]){
        ans.push_back(a[i]);
        break;
        }
       }
a.erase(unique(a.begin(),a.end()),a.end());

for(int i=0;i<a.size();i++){
    if(a[i]!=i+1){
        ans.push_back(i+1);
        break;
    }
}
if(ans.size()==1)
ans.push_back(grid.size()*grid.size());

return ans;

    }
};