class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";
        
        for(int i = 0; i < s.size(); i++){
            if(res.size() == 0 || res.back() != s[i]){
                res.push_back(s[i]);
            }
            else{
                res.pop_back();
            }
        }
        
        return res;
    }
};