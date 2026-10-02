class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false ;
        
        }
        long long pal = 0;
        int rem , num = x ;
        while (num){
            rem = num % 10 ;
            pal = pal* 10 + rem ;
            num /= 10 ;
        }
        if (x==pal){
            return true ;
        }
        return false ;
    }
};