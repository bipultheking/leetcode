class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int Leftsum = 0;
        int Rightsum =0;
        int leftq = 0;
        int rightq =0;
        for(int i=0;i<n/2;i++){
            if(num[i]== '?'){
                leftq++;
            }
            else{
               Leftsum += num[i] - '0';
            }
        }
        for(int i=n/2;i<n;i++){
            if(num[i]== '?'){
                rightq++;
            }
            else{
               Rightsum += num[i] - '0';
            }
        }

        int qdiff = leftq - rightq;
        int sumdiff = Leftsum - Rightsum;

        if(qdiff % 2 != 0){
            return true;
        }
        if( sumdiff * 2 + qdiff * 9 != 0){
            return true;
        }return false;
        
    }
};