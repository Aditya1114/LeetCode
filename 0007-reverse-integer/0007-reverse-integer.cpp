class Solution {
public:
    int reverse(int x) {
        int value=0;
        bool check=false;
        if(x<=INT_MIN)
            {return 0;}
        if(x<0){
        check=true;
                x=-x;
            }
        while(x!=0){   
            if(value > INT_MAX /10){
                return 0;
            }  
        int remainder = x % 10;
        value = value * 10 +remainder;
        x=x/10;}
        return check  ? -value : value;
    }
};