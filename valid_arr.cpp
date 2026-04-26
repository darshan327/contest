// Leetcode number : 3912. Valid Elements in an Array

// time complexity : O(n)
 // space complexity : O(n)

  class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
       vector<int> res;
        int n=nums.size();
        if(n<=2) return nums;
        vector<int> s(n);
        s[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            s[i]=max(s[i+1],nums[i]);
        }
       int left=nums[0];
        res.push_back(nums[0]);
        for(int i=1; i<n-1; i++){
            if(nums[i]>left || s[i+1]<nums[i]){
                res.push_back(nums[i]);
            }
            left=max(left,nums[i]);
        }
        res.push_back(nums[n-1]);
        return res;
    }
};