class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int ,char>hash;
        int low = 0;
        int maxlength = 0;
        for(int high  = 0;high < s.size();high++){
            hash[s[high]]++;
            while(hash.size()< (high - low)+1 ){
                hash[s[low]]--;
                if(hash[s[low]] == 0){
                    hash.erase(s[low]);
                }
                low++;
                (high - low )+1;

            }
            maxlength = max(maxlength,(high-low)+1);
        }return maxlength;
        
    }
};