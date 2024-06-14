class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int s=0;
        int r=n;
        while(n!=0){
            int d=n%10;
            n=n/10;
            s=s+d*d*d;
        }
        if(s==r)
        return "true";
        
        return "false";
    }
};
