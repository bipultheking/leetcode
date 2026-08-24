class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestcase = nums[0] ;
        int worstcase = nums[0];
        int maximum = nums[0];
        
        for(int i = 1;i<nums.size();i++){
          int  product = nums[i]*bestcase;
          int  product1 = nums[i]*worstcase;
           if(nums[i] > product && nums[i] > product1) {
                bestcase = nums[i];
            }
            else if(product > product1) {
                bestcase = product;
            }
            else {
                bestcase = product1;
            }
            if(nums[i]<product && nums[i]<product1){
                worstcase = nums[i];
            }else if(product < product1){
                worstcase = product;
            }else{
                worstcase = product1;
            }
            if(maximum< bestcase){
                maximum = bestcase;
            }
           

        }return maximum;
        
    }
};