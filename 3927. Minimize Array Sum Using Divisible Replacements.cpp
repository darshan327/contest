   // time complexity: O(n*sqrt(m)) where n is the size of the input array and m is the maximum value in the array.
    // space complexity: O(n) where n is the size of the input array, due to the unordered_set storing unique elements from the array.

    class Solution {
       public:
    long long minArraySum(vector<int>& nums) {
        long long sum=0;
        unordered_set<int> st(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            int best=nums[i];
            for(int j=1; j<=sqrt(nums[i]); j++){
                if(nums[i]%j==0){
                if(st.count(j))
                    best=min(best,j);
                
                int other= nums[i]/j;
                    
                if(st.count(other))
                    best=min(best,other);
                
            }
            }
            sum+=best;
        }
        return sum;
    }
};