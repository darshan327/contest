class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i],maxi=INT_MIN,mini=INT_MAX;
            while(num>0){
                int r=num%10;
                maxi=max(maxi,r);
                mini=min(mini,r);
                num/=10;
            }
            res.push_back(maxi-mini);
        }
        int ma=INT_MIN;
        for(int i=0; i<res.size(); i++){
            ma=max(ma,res[i]);
        }
        int sum=0;
        for(int i=0; i<res.size(); i++){
            if(ma==res[i]){
               sum+=nums[i]; 
            }
        }
        return sum;
    }
};