class Solution {
public:
   int add(int n ){
    int sum =0;
    int digit;
    while(n>0){
        digit = n%10;
        n = n/10;
        sum = sum + digit*digit;

    } return sum;
   }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(fast!=1){
            slow = add(slow);
            fast = add(fast);
            fast = add(fast);
            if(slow == fast && slow != 1){
                return false;
            }
        }return true;

        
    }
};