class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> hash;
        int res=0;
        int low =0;
        for(int high =0;high<s.size();high ++){
            hash[s[high]]++;
            while(hash.size()==3){
                res = res + (s.length()-high);
                hash [s[low]]--;
                if(hash[s[low]] == 0){
                    hash.erase(s[low]);
                }
                low++;
            }
        }return res;
        
    }
};