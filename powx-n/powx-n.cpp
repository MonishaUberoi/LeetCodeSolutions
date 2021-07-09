class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long nn = n;
        nn = abs(nn);
        while(nn){
            if(nn%2){
                ans = ans * x;
                nn = nn-1;
            }else{
                x = x*x;
                nn = nn/2;
            }
        }        
        if(n<0){
            return (double)1.0/(double)ans;
        }
        return ans;
    }
};