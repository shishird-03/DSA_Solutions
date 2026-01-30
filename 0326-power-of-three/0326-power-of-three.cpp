class Solution {
public:
    bool isPowerOfThree(int n) {
        int power=0;
        if(n<=0){
            return false;
        }
        while(pow(3,power)<=n){
            if(n== pow(3,power) ){
                return true;
            }
           power++;  
        }
        return false;
    }
          
};
