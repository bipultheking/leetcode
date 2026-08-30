class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        int countone = 0;
        int countzero = 0;
        unordered_map<int,int>f;
        
        for(int i = 0; i < n ; i++){
            if(nums[i] == 0){
                countzero++;
            }else{
                countone++;
            }
            int difference = countzero - countone;
            if(difference == 0){
                res = max(res,i+1);
                continue;
            }
            if(f.find(difference) == f.end()){
                f[difference] = i;
            }else{
                int index = f[difference];
                int length = i - index;
                res = max(res , length);
            }

        }return res;

        
    }
};