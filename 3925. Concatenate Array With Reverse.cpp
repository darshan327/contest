  
  // time complexity: O(n)
  // space complexity: O(1)


  class Solution {
      public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size()-1;
        for(int i=n; i>=0; i--){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};