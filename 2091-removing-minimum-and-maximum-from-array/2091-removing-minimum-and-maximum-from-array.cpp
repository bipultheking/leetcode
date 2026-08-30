class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int minindex = INT_MAX;
        int maxindex = INT_MAX;
        int maxi = INT_MIN;
        for(int i =0;i<nums.size();i++){
            if(mini>nums[i]){
                mini = nums[i];
               minindex = i;
            }
            if(maxi<nums[i]){
                maxi = nums[i];
                maxindex = i;
            }
        }
        if(maxindex<minindex){
            swap(maxindex,minindex);
        }  

        int leftdelete = maxindex +1;
        int rightdelete = nums.size()-minindex;

        int both = (minindex+1)+(nums.size()-maxindex);

        return min(leftdelete,min(rightdelete,both));
    }
} ;
       