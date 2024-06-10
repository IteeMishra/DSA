// Given a set of n nuts & bolts. There is a one-on-one mapping between nuts and bolts. You have to Match nuts and bolts efficiently. Comparison of a nut to another nut or a bolt to another bolt is not allowed. It means the nut can only be compared with the bolt and the bolt can only be compared with the nut to see which one is bigger/smaller.
// The elements should follow the following order: { !,#,$,%,&,*,?,@,^ }

// Note: Make all the required changes directly in the given arrays, output will be handled by the driver code.

// Examples

// Input: n = 5, nuts[] = {@, %, $, #, ^}, bolts[] = {%, @, #, $ ^}
// Output: 
// # $ % @ ^
// # $ % @ ^
// Explanation: As per the order # should come first after that $ then % then @ and ^. 
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[bolts[i]]++;
            mpp[nuts[i]]++;
        }
        int j=0;
        for(int i=0;i<n;i++){
            if(mpp['!']%2==0 && mpp['!']!=0){
                bolts[j]='!';
                nuts[j]='!';
                j++;
                mpp['!']=mpp['!']-2;
            }
          else  if(mpp['#']%2==0 && mpp['#']!=0){
                bolts[j]='#';
                nuts[j]='#';
                j++;
                 mpp['#']=mpp['#']-2;
                 
            }
          else  if(mpp['$']%2==0 && mpp['$']!=0){
                bolts[j]='$';
                nuts[j]='$';
                j++;
                 mpp['$']=mpp['$']-2;
            }
           else if(mpp['%']%2==0 && mpp['%']!=0){
                bolts[j]='%';
                nuts[j]='%';
                j++;
                 mpp['%']=mpp['%']-2;
            }
          else  if(mpp['&']%2==0 && mpp['&']!=0){
                bolts[j]='&';
                nuts[j]='&';
                j++;
                 mpp['&']=mpp['&']-2;
            }
           else if(mpp['*']%2==0 && mpp['*']!=0){
                bolts[j]='*';
                nuts[j]='*';
                j++;
                 mpp['*']=mpp['*']-2;
            }
            
           else if(mpp['?']%2==0 && mpp['?']!=0){
                bolts[j]='?';
                nuts[j]='?';
                j++;
                 mpp['?']=mpp['?']-2;
            }
           else if(mpp['@']%2==0 && mpp['@']!=0){
                bolts[j]='@';
                nuts[j]='@';
                j++;
                 mpp['@']=mpp['@']-2;
            }
           else if(mpp['^']%2==0 && mpp['^']!=0){
                bolts[j]='^';
                nuts[j]='^';
                j++;
                 mpp['^']=mpp['^']-2;
            }
          
        }
    }
};
