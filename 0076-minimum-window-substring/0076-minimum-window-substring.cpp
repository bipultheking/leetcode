class Solution {
public:
    string minWindow(string s, string t) {

        if (t.size() > s.size())
            return "";

        int low = 0;
        int minfrequency = INT_MAX;
        int count = 0;

        int hash[256] = {0};

        int startindex = -1;

        
        for (int i = 0; i < t.size(); i++) {
            hash[t[i]]++;
        }

        for (int high = 0; high < s.size(); high++) {

            
            if (hash[s[high]] > 0) {
               
                count++;
            } hash[s[high]]--;

            
            while (count == t.size()) {

                
                if (high - low + 1 < minfrequency) {
                    minfrequency = high - low + 1;
                    startindex = low;
                }

               
                hash[s[low]]++;

                if (hash[s[low]] > 0) {
                    count--;
                }

                low++;
            }
        }

        return startindex == -1 ? "" : s.substr(startindex, minfrequency);
    }
};