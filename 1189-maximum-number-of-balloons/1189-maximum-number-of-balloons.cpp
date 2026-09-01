class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>hash;
        for(char c : text){
            hash[c]++;
        }

        int b = hash['b'];
        int a = hash['a'];
        int l = hash['l'] / 2;
        int o = hash['o'] / 2;
        int n = hash['n'];

        return min({b,a,l,o,n});
        
    }
};