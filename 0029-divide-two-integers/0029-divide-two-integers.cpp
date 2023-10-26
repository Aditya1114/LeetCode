class Solution {
public:
    int divide(int dividend, int divisor) {
        long s=0;
        long e=abs(dividend);
        long ans=0;
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        while(s<=e){
            long mid=s+(e-s)/2;
            if(abs(mid *divisor) == abs(dividend)){
                ans=mid;
                break;
            }
            else if(abs(mid * divisor)> abs(dividend))  e=mid-1;
            else{
                ans=mid;
                s=mid+1;
            }
        }
        if((divisor> 0 && dividend>0) || (divisor< 0 && dividend<0))
            return ans;
        else
            return -ans;
    }
};