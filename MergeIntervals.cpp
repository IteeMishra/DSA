// Given an array of intervals where intervals[i] = [starti, endi], 
// merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

// Code here
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        vector<int>p={arr[0][0],arr[0][1]};
       for(int i=1;i<arr.size();i++){
                if(arr[i][0]<=p[1])
                {
                    if(p[1]<arr[i][1])
                    p[1]=arr[i][1];
                }
                  
                else{
                    ans.push_back(p);
                    p[0]=arr[i][0];
                    p[1]=arr[i][1];
                }
        }
        ans.push_back(p);
        return ans;

    }
};
