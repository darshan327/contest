
// LeetCode Number : 3917. Count Indices With Opposite Parity

// time complexity : O(n)
// space complexity : O(n)

      class Solution {
        public:
    vector<int> countOppositeParity(vector<int>& nums) {
         int even=0,odd=0;
        vector<int> res;
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
           for(int i=0; i<nums.size(); i++){
               if(nums[i]%2==0){
                   even--;
                   res.push_back(odd);
               }else{
                   odd--;
                   res.push_back(even);
               }
           }
        return res;
    }
};