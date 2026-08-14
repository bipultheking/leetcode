class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int low = 0;
        int count = 0;
        int res = 0;
        for(int high = 0;high<nums.size();high++){
            if(nums[high] %2 != 0){
                count += 1;
            }
            while(count == k){
                res += 1;
                
                int temp = high + 1;          

                while(temp < nums.size() && nums[temp] % 2 == 0) {
                    res += 1;                 
                    temp++;                   
                }

                if(nums[low] % 2 != 0){
                    count -= 1;
                    
                }low++;
            }
        }
        return res;
    }
};