class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        
        vector<vector<int>>result;

        for (int i = 0;i<nums.size()-2;i++){
            if (i > 0 && nums[i] == nums[i - 1]) {continue;}
            int sum = -1* nums[i];
            int left = i+1;
            int right = nums.size()-1 ;
            int k =nums.size()-1;
            while(left<right){
              int  Newsum = nums[left]+nums[right];
                if(sum == Newsum){
                  result.push_back({nums[i],nums[left],nums[right]});
                  left++;
                  right--;
                  while( left<k &&  nums[left] == nums[left-1]){
                    left++;
                  }
                  while( right>=0 && nums[right]== nums[right+1]){
                    right--;
                  }
                }
                  else if(sum < Newsum){
                    right-- ;
                  }
                  else{
                    left++;
                  }
                 
                    
                

            }

        } return result; 
    }  
    
};