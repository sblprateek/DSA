class Solution {
public:
    double myPow(double x, int n) {
      long long nn=(long long)n;
      double ans=1;
        
        if(nn<0)nn=-1*nn;
        
        while(nn>0){
        if(nn%2==0){
            x=x*x;
            nn=nn/2;
        }
        else{
            ans=ans*x;
            nn=nn-1;
        }
        }
       

        return (n>0)?ans:1/ans;
    }

   

};