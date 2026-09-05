class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int n = nums.size();
        vector<int>mini(n);
        vector<int>maxi(n);
        for(int i =0;i<n;i++){
            maximum = max(maximum,nums[i]);
            maxi[i] = maximum;
        }
        for(int i = n-1;i>=0;i--){
            minimum = min(minimum,nums[i]);
            mini[i]=minimum;
        }
        for(int i =0;i<n;i++){
            if(maxi[i]-mini[i] <= k){
                return i;
            }
        }
        return -1;
        
    }
};