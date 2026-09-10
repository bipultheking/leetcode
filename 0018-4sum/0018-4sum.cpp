class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int i =0;i+3<nums.size();i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j = i+1;j+2<nums.size();j++){
                if(j>i+1 && nums[j] == nums[j-1]){
                    continue;
                }
                long long sum = nums[i]+nums[j];
                int left = j+1;
                int right = nums.size()-1;
                while(left < right){
                  long long newsum = sum + nums[left] +nums[right];
                    
                    if(newsum == target){
                        result.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                        while(left < right && nums[left]==nums[left-1]){
                            left++;
                        }
                        while(left < right && nums[right] == nums[right+1]){
                            right--;
                        }
                    }
                    else if(newsum<target){
                        left++;
                    }else{
                        right--;
                    }

                }

            }
        }return result;
        
    }
};