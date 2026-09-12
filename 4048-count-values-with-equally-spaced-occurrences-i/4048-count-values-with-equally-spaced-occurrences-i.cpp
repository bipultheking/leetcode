class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>hash;
        int count =0;
        for(int i =0;i<nums.size();i++){
            hash[nums[i]].push_back(i);
        }
        for(auto num: hash){
            if(num.second.size()==3){
                if(num.second[1]-num.second[0] == num.second[2]-num.second[1]){
                    count += 1;
                }
            }
        }
        return count;

        
    }
};