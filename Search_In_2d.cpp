#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       int colnum=matrix[0].size();
       int rownum=matrix.size();

       int end=colnum-1;
       int start=0;
       int mid=start+(end-start)/2;
       while( start<rownum  && end>=0){
        if(matrix[start][end]==target){
            return true;
        }
        else if(matrix[start][end]>target){
           end--;
        }
        else if(matrix[start][end]<target){
            start++;
        }
       }
       return false;

    }
};