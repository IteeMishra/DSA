#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> result;
     for(int i=1;i<=numRows;i++){
        vector<int>vec;
        int ans=1;
        vec.push_back(ans);
        for(int j=1;j<i;j++){
            ans=ans*(i-j)/j;
            vec.push_back(ans);
        }
        result.push_back(vec);
     }
     return result;
        
    }
};