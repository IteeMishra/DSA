class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      vector<vector<int>>ans;
      for(int i=0;i<nums.size();i++){
       
        if(i>0 && nums[i-1]==nums[i]) continue;

         int j=i+1;
        int k=nums.size()-1;
      
        while(k>j){
              int sum=nums[i]+nums[j]+nums[k];
        if(sum>0)
                     k--;
        else if(sum==0)
        {
            vector<int>a={nums[i],nums[j],nums[k]};
            ans.push_back(a);
            j++;
            k--;
            while( j<k && nums[j-1]==nums[j]) j++;
            while( j<k && nums[k]==nums[k+1]) k--;
        }
       else
        j++;

      }
      }
      return ans;
    }
};
