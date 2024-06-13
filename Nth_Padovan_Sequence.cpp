// Given a number n, find the nth number in the Padovan Sequence.

// A Padovan Sequence is a sequence which is represented by the following recurrence relation
// P(n) = P(n-2) + P(n-3)
// P(0) = P(1) = P(2) = 1

// Note: Since the output may be too large, compute the answer modulo 10^9+7.

// Examples :

// Input: n = 3
// Output: 2
// Explanation: We already know, P1 + P0 = P3 and P1 = 1 and P0 = 1

int mod=1e9+7;
class Solution {
  public:

//Recursive Approach
//   int func(int n){
//       if(n==0 || n==1 || n==2) return 1;
      
//       return func(n-2) + func(n-3);
//   }
    int padovanSequence(int n) {
        // code here.
        int pPrevPrev = 1, pPrev = 1, pCurr = 1, pNext = 1;
 
    for (int i=3; i<=n; i++)
    {
        pNext = (pPrevPrev%mod + pPrev%mod)%mod;
        pPrevPrev = pPrev;
        pPrev = pCurr;
        pCurr = pNext;
    }
 
    return pNext;
    }
};
