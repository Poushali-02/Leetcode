class Solution { 
public: 
    double myPow(double x, long long int n) {
        double ans=1; //creating the answer variable
        if(n<0){
            x = 1/x; //formatting for negative n
        }
        long long int bin = abs(n);
        while(bin>0){
            if(bin % 2 == 1){ //accessing binary
                ans *= x; //updating answer
                }
            bin /= 2;
            x = x*x; //updating x
        }
        return ans;
    }
};
