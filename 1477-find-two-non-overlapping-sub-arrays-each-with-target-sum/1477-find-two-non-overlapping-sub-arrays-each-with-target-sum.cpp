class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int low = 0;
        int sum = 0;
        int ans = INT_MAX;

        vector<int> hash(arr.size(), INT_MAX);

        for(int high = 0; high < arr.size(); high++){
            sum += arr[high];

            while(sum > target){
                sum -= arr[low];
                low++;
            }

            if(high > 0){
                hash[high] = hash[high - 1];
            }

            if(sum == target){
                int size = high - low + 1;

                if(low > 0 && hash[low - 1] != INT_MAX){
                    ans = min(ans, size + hash[low - 1]);
                }

                hash[high] = min(hash[high], size);
            }
        }

        if(ans == INT_MAX){
            return -1;
        }

        return ans;
    }
};