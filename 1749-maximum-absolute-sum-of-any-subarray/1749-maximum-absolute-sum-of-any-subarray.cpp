class Solution {
public:
    
    int maxAbsoluteSum(vector<int>& nums) {
        int bestcase = nums[0] ;
        int worstcase = nums[0];
        int maximum = abs(nums[0]);
        
        for(int i = 1;i<nums.size();i++){
          int  sum1 = nums[i]+bestcase;
          int  sum2 = nums[i]+worstcase;
           if(nums[i] > sum1 && nums[i] > sum2) {
                bestcase = nums[i];
            }
            else if(sum1 > sum2) {
                bestcase = sum1;
            }
            else {
                bestcase = sum2;
            }
            if(nums[i]<sum1 && nums[i]<sum2){
                worstcase = nums[i];
            }else if(sum1 < sum2){
                worstcase = sum1;
            }else{
                worstcase = sum2;
            }
            if(maximum< bestcase){
                maximum = bestcase;
            }
            if(maximum < (-worstcase)){
                maximum = (-worstcase);
            }
           

        }return maximum;
        
    }
};
        
    