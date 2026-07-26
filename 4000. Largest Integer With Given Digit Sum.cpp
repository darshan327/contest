class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0){
            return 0;
        }
        if(s>9*n){
            return -1;
        }
        int ans = 0 , sum = 0;
       for(int i=0; i<n; i++){
           sum = min(9,s);
           s=s-sum;
           ans = ans*10 + sum;
       } 
        return ans;
    }
};