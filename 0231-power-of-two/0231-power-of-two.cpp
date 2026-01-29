class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x=0;
        if(n<=0){
            return false;
        }
        while(pow(2,x)<=n){
        if(n== pow(2,x)){
            return true;
        }
        x++;
        }

    return false;
    }
};