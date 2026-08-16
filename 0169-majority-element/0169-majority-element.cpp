class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int,int>hash;
     for(int i = 0;i<nums.size();i++){
        hash[nums[i]]++;
     }
     int maximum = 0;
     int answer = 0;
     for(auto it : hash){
        if(it.second > maximum){
            maximum = it.second;
            answer = it.first;
        }
     }return answer;
     
        
    }
};