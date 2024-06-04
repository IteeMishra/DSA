// Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
// palindrome
//  that can be built with those letters.

// Letters are case sensitive, for example, "Aa" is not considered a palindrome.

class Solution {
public:
    int longestPalindrome(string s) {
      if(s.size()==1)
      return 1;

   unordered_map<char,int>mpp;
   unordered_set<char>st;
   for(int i=0;i<s.size();i++){
    mpp[s[i]]++;
    st.insert(s[i]);
   }
   if(mpp[s[0]]==s.size())
   return s.size();
   int ans=0;
   int a=0;
for(auto i:st){
    if(mpp[i]%2==0){
        ans=ans+mpp[i];
    }
   
    else{
        ans=ans+mpp[i]-1;
       a=1;
    }
}
if(a==1)
ans=ans+1;
return ans;


    }
};
