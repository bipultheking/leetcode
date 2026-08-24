class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending=0;
        int sum ;
        int maximum = INT_MIN;
        for(int i = 0; i<nums.size();i++){
            sum =  nums[i]+bestending ;
            if(nums[i]> sum){
                bestending = nums[i];
                maximum = max(maximum,bestending);
            }else{
                bestending = sum;
            }
             
           
           
            maximum = max(maximum,bestending);

           
        }return maximum;
        
    }
};