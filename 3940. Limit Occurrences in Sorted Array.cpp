// time complexity: O(n)
// space complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            int n = k , num = nums[i];
            while(i<nums.size() && n>0 && num == nums[i]){
                res.push_back(nums[i]);
                i++;
                n--;
            }
            while(n==0 && i<nums.size() && num==nums[i]){
               i++;
            }
            i--;
        }
        return res;
    }
};

     int main(){
        Solution obj;
        int n,k;
        cin>>n>>k;
        vector<int> res(n);
        for(int i=0; i<n; i++){
            cin>>res[i];
        }
        vector<int> ans = obj.limitOccurrences(res,k);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }

        return 0;
     }