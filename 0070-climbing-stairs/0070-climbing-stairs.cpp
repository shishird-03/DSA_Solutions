class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n; 
        }
        int climb=0;
        int climb_1=1;
        int climb_2=2;
        for(int i=3;i<=n;i++){
           climb= climb_1+ climb_2;
           climb_1= climb_2;
           climb_2= climb;
        }
        return climb_2;
        
    }
};