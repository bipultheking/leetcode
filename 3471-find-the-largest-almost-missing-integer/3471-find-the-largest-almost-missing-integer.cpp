class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        int answer = -1;
        int maximum = nums[0];
        int res=-1;
        for(int i = 1;i<nums.size();i++){
            maximum = max(maximum,nums[i]);

        }
        if(k==nums.size())return maximum;

        for(int i =0;i<nums.size();i++){
            hash[nums[i]]++;
         }
        for(auto it : hash){
            if(it.second == 1){
                answer = max(answer,it.first);
            }
        }
        if(k==1){
            return answer;
        }
        int j;
        int l;
      if(nums[0]>nums[nums.size()-1]){
       j=0;
       l=nums.size()-1;}
      else{
        j=nums.size()-1;
        l=0;
      }
      if(hash[nums[j]]==1) return nums[j];
      else if(hash[nums[l]]==1) return nums[l];
      return -1;
        
    }
};