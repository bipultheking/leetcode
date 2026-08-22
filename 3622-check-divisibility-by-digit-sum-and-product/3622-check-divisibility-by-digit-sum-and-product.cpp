class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        long sum =0;
        long long product =1;
        int digit;
        while(n>0){
            digit =  n %10;
            sum += digit;
            product *= digit;
           n = n/10;
            
        }int total = sum + product;
        if(num % total == 0){
            return true;
        }return false;
        
    }
};