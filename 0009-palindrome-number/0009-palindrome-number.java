class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0)
         return false;  
        int revNum = 0;
        int dup = x;
        
        while(x > 0) {
            int ld = x % 10;
            revNum = (revNum * 10) + ld;
            x = x / 10;
        }
        
        return dup == revNum;
    }
}
