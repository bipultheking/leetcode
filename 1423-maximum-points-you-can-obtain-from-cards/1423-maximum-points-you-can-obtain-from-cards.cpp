class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum = 0;
        int rightsum =0;
        int n = cardPoints.size()-1;
        
        for (int i = 0;i<k;i++){
            leftsum = leftsum + cardPoints[i];
        }
        int maxsum = leftsum;
        for(int i=0;i < k;i++){
            rightsum = rightsum + cardPoints[n-i];
            leftsum = leftsum - cardPoints[k-i-1];
            maxsum =  max(maxsum,rightsum+leftsum);


        }return maxsum;
    }
};