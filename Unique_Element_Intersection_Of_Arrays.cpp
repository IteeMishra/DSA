// Given two integer arrays nums1 and nums2, return an array of their 
// intersection. Each element in the result must be unique and you may return the result in any order.

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
      sort(nums2.begin(),nums2.end());

      int i=0;
      int j=0;
      int n=nums1.size();
      int m=nums2.size();
      while(i<n && j<m){
            if(nums1[i]==nums2[j]){
            ans.push_back(nums1[i]);
            i++;
            j++;
      }
      else if(nums1[i]<nums2[j]){
        i++;
      }
      else
      j++;
      }
    unordered_set<int>st;
    for(int i=0;i<ans.size();i++){
        st.insert(ans[i]);
    }
    vector<int>r;
    for(auto i:st)
    r.push_back(i);

    return r;
    }
};
