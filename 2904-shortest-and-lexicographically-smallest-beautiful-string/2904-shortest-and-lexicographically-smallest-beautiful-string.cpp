class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int low = 0;
        int startindex=0;
        int minlength = INT_MAX;
        unordered_map<char,int>mp;
        for(int high = 0;high <s.size();high++){
            mp[s[high]]++;
            while(mp['1']>k){
                mp[s[low]]--;
                if(mp[s[low]]== 0){
                    mp.erase(s[low]);
                    }
                low++;
                
            }

            if(mp['1'] == k){
                while (s[low] == '0'){
                    low++;}

                int length = high-low+1;

                if(minlength>length){
                    minlength = length;
                    startindex = low;
                    }

                else if(minlength == length && s.substr(low,length)<s.substr(startindex,minlength)){
                    startindex = low;
                }   
                 
            }
        } 
         if (minlength == INT_MAX)
            return "";
        return s.substr(startindex,minlength);
        
    }
};