class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        for(int i =0;i<ransomNote.size();i++){
            mp[ransomNote[i]]++;
        }
        for(int i =0;i<magazine.size();i++){
            mp1[magazine[i]]++;
        }
        for(auto it : mp){
            if(mp1[it.first] < it.second){
                return false;
            }
        }

        return true;

        
    }
};