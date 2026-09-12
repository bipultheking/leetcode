class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        int count = 0;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto x : mp){
            if(x.second.size() >=3 ){
                int difference = x.second[1]-x.second[0];
                bool valid = true;
                for(int i =2;i<x.second.size();i++){
                    if(x.second[i] - x.second[i-1] != difference){
                        valid = false;
                        break;
                    }
                }
                if(valid){
                    count +=1;
                }

            }
        }return count;
        
    }
};