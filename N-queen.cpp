#include<bits/stdc++.h>
using namespace std;
class Solution{
public:

void recur(vector<vector<int>>& ans,vector<int>& ds,int n,vector<int>& leftrow,vector<int>& upper,vector<int>& lower,int col){
    //Base case
    if(col==n){
        ans.push_back(ds);
        return;
    }
        for(int i=0;i<n;i++){

            if(leftrow[i]==0 && lower[i+col]==0 && upper[n-1 + col -i]==0){

                ds.push_back(i+1);
                leftrow[i]=1;
                lower[i+col]=1;
                upper[n-1+col-i]=1;

                recur(ans,ds,n,leftrow,upper,lower,col+1);
                
                ds.pop_back();
                leftrow[i]=0;
                lower[i+col]=0;
                upper[n-1+col-i]=0;
            }
        }
        
    
}
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<int>ds;
        int col=0;
       int arr[n][n];
      
        vector<int>leftrow(n,0);
        vector<int>upper(2*n-1,0);
        vector<int>lower(2*n+1,0);
        recur(ans,ds,n,leftrow,upper,lower,0);
        return ans;
    }
};