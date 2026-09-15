class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
        });
    int start1 = intervals[0][0];
    int end1 = intervals[0][1];
    int count = intervals.size();

        for(int i =1;i<intervals.size();i++){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];

            if(start1 <= start2 && end1 >= end2){
                count--;
            }else{
                start1 = start2;
                end1 =max(end1,end2);
            }
        }
        return count;
    }
};