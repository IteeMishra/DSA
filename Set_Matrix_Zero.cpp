#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
void remover(vector<vector<int>>& matrix,int ij,int j){
   for(int i=0;i<matrix[0].size();i++){
    matrix[ij][i]=0;
 
   }
   for(int i=0;i<matrix.size();i++)
      matrix[i][j]=0;
}
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> vec1;
        vector<int>vec2;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    vec1.push_back(i);
                    vec2.push_back(j);
                }
            }
        }
        for(int i=0;i<vec1.size();i++)
        {
           remover(matrix,vec1[i],vec2[i]);
        }
    }
};