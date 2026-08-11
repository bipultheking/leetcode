class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int , int>hash;
        int maxtree = INT_MIN ;
        int low = 0;
        for(int high = 0;high<fruits.size();high++){
            hash[fruits[high]]++;
            while(hash.size()>2){
                hash[fruits[low]]--;
                if(hash[fruits[low]] == 0)
                    hash.erase(fruits[low]);
                low++;
            }
           maxtree = max(maxtree,(high-low)+1);
        }

        return maxtree;
        
    }
};