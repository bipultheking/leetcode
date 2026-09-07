class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int,int>hash;
        for(int i =0;i<nums.size();i++){
            hash[nums[i]] = 1;
        }
        int longest = 0;

        for(auto it : hash){
            int num = it.first;
        

        if(hash.find(num-1) == hash.end()){
            int current = num;
             int length = 1;

             while (hash.find(current + 1) != hash.end()) {
                    current++;
                    length++;
                }

                   longest = max(longest, length);

          }
        }

        return longest;

    }
};