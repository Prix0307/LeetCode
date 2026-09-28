class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0 , product = 1,num;
        while (n){
            num=n%10 ;
            sum = sum + num;
            product = product* num ;
            n /=10;

        }
        return (product - sum);
    }
};