class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        int original=x;
        int digit=0;
        double reverse=0;
        while(x>0){
            digit = x %10;
            reverse=reverse*10+digit;
            x=x/10;
        }
        return original==reverse;
    }
};