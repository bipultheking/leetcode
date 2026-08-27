class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>sumleft(n,0);
        vector<int>sumright(n,0);
        for(int i =1;i<nums.size();i++){
            sumleft[i] = sumleft[i-1]+nums[i-1];
            
        }
        for(int i =n-2;i>=0;i--){
            sumright[i] = sumright[i+1]+nums[i+1];

        }
        for(int i =0;i<nums.size();i++){
            if(sumright[i]==sumleft[i])
                return i;
        }
        return -1;
       
    }
};