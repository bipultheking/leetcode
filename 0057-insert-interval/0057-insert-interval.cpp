class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res;

        int i =0;
        int n = intervals.size();

        while(i<n && intervals[i][1] < newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }

        int start1 = newInterval[0];
        int end1 = newInterval[1];

        while(i<n && intervals[i][0] <= end1){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];

            start1 = min(start1,start2);
            end1 = max(end1,end2);

            i++;

        }res.push_back({start1,end1});
        while(i < n) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
        
    }
};