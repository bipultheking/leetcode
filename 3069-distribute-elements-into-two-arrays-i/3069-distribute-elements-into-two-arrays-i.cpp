class Solution {
public:
vector<int> merge(vector<int>& a, vector<int>& b) { 
    vector<int> result = a; 

    result.insert(result.end(), b.begin(), b.end()); 

    return result; 
}
    vector<int> resultArray(vector<int>& nums) {
        vector<int >arr1 = {nums[0]};
        vector<int>arr2 = {nums[1]};
        
       
        for(int i = 2;i<nums.size();i++){
            if(arr1.back() > arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }

        }
        vector<int> ans = merge(arr1,arr2);

        return ans;
    }
};