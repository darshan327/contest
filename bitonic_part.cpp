// Leetcode number : 3909. Compare Sums of Bitonic Parts

   // time complexity : O(n)
   // space complexity : O(1)

   class Solution {
     public:
    int compareBitonicSums(vector<int>& nums) {
        int idx=-1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                idx=i;
                break;
            }
        }
        long long sum1=0,sum2=0;
        for(int i=0; i<=idx; i++){
            sum1+=nums[i];
        }
           for(int i=idx; i<nums.size(); i++){
              sum2+=nums[i];
        }
        if(sum1==sum2) return -1;
        return sum1>sum2?0:1;
    }
};