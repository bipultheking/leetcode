class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = haystack.find(needle);

        if (ans == string::npos) {
            return -1;
        }

        return ans;
    }
};