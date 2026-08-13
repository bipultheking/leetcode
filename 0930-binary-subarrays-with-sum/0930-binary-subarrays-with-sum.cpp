class Solution {
public:
   int fun(vector<int>&nums,int goal){ 
    if (goal<0){
            return 0;
           }
        int count = 0;
        int low = 0;
        int sum = 0;
        for(int high = 0;high <nums.size();high ++){
           
            sum = sum + nums[high];

             while(sum>goal){
                sum = sum - nums[low];
                low++;

            }count = count + high -low  +1;
        } return count;

   }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return fun(nums,goal) - fun (nums,goal-1);
    }
};