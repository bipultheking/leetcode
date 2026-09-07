class Solution {
public:

    // try inserting new interval first then merge 


    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>array;
        int n = intervals.size();
        bool insert = false;
        for(int i =0;i<n;i++){
            if(insert == false && intervals[i][0] >= newInterval[0]){
                array.push_back(newInterval);
                insert = true;
            }
            array.push_back(intervals[i]);
        }
        if(insert == false){
            array.push_back(newInterval);

        }

        // yaha tk insert hi kr rhe the ab ek array bn gya sorted insertion ke saath ab merge krte hai

        vector<vector<int>>res;
        int start1 = array[0][0];
        int end1 = array[0][1];

        for(int i =1; i<= n;i++){
            int start2 = array[i][0];
            int end2 = array[i][1];

            if(end1 >= start2){
                start1 = min(start1,start2);
                end1 = max(end1,end2);
                continue;

            }
            else{
                res.push_back({start1,end1});
                start1 = start2;
                end1 = end2;

            }
        }res.push_back({start1,end1});
        return res;
        
    }
};