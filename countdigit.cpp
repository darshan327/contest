
//Leetcode number : 3895. Count Digit Appearances

// intuition :  we should to count the number of times that digit appears in the array of number given.
// Time complexity : O(n*m) where n is the size of the array and m is the number of digits in the largest number in the array.
// Space complexity : O(1) (constant space)
   
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            int num=nums[i];
            while(num>0){
                int r=num%10;
                if(r==digit){
                    count++;
                }
                num/=10;
            }
        }
        return count;
    }
};