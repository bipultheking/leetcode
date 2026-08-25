class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        int multiple = k;

        while(mp.find(multiple) != mp.end()) {
            multiple += k;
        }

        return multiple;
    }
};