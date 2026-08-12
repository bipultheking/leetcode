class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        int low = 0;
        int maxfrequency = INT_MIN;
        for (int high = 0;high<nums.size();high++ ){
            hash[nums[high]]++;
            while(hash[0]>k){
                hash[nums[low]]--;
                if(hash[nums[low]]== 0){
                    hash.erase(nums[low]);
                }
                low++;
            }
            
                   
                 maxfrequency = max(maxfrequency,high-low+1);
            
        }return maxfrequency;
    }
};