//You are given two strings s and t consisting of only lowercase English letters.

//Return the minimum number of characters that need to be appended to the end of s so that t becomes a subsequence of s.

//A subsequence is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters.

class Solution {
public:
    int appendCharacters(string s, string t) {
          std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        int r=0;
        char c=t[r];
        int ind=0;
       
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                c=t[r+1];
                r++;
                ind++;
            }
        }
        return t.size()-ind;
    }
};
