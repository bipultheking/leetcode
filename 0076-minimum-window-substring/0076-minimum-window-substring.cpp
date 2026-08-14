class Solution {
public:

    bool sahi (int have [],int needed []){
        for(int i = 0;i<256 ; i++){
            if(have[i]<needed[i])
            {
                return false;
            }
           
        }return true;
    }
    string minWindow(string s, string t) {
        int low =0;
        int startindex = -1;
        int minfrequency =INT_MAX;

        int needed[256] = {0};
        int have[256 ] = {0};

        for(int i = 0;i<t.size();i++){
            needed[t[i]]++;
        }

        for(int high = 0;high<s.size();high ++){

            have[s[high]]++;

            while(sahi(have,needed)){

                if(high - low + 1 < minfrequency) {
                     minfrequency = high - low + 1;
                     startindex = low;
                  }

                have[s[low]]--;
                low++;
            }
        }
         if(startindex == -1)
            return "";
        return s.substr(startindex,minfrequency);
        
    }
};