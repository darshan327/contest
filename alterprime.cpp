
// Leetcode number : 3896. Minimum Operations to Transform Array into Alternating Prime

// we should to make the array element at even index to prime number 
  //  and the array element at odd index to non-prime number 

  // time complexity : O(n logn) 
// space complexity : O(1)
   class Solution {
    public:
         bool isprime(int num){
             for(int i=2; i<=sqrt(num); i++){
                 if(num%i==0){
                     return false;
                 }
             }
             return true;
         }
    
    int minOperations(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==2){
                if(i%2==1){
                count+=2;
                }
                continue;
            }
            if(i%2==1){
                if(nums[i]==1){
                    continue;
                }
                if(isprime(nums[i])){
                    count++; 
              }
                  continue;
            }
             if(nums[i]==1){
                 count++;
                 continue;
             }
            int val=nums[i];
            while(isprime(val)==0){
                 val=val+1;
            }
            count+=val-nums[i];
        }
        return count;
    }
};