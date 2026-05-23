// time complexity: O(n)
// space complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        int i=0,j=nums.size()-1;
        while(i<j){
            while(i<j){
                if(nums[i]==0){
                    break;
                }
                i++;
            }
            while(i<j){
                if(nums[j]!=0){
                    break;
                }
                j--;
            }
            if(i<j){
            i++;
            j--;
          
            count++;
        }
        }
        return count;
    }
};

       int main(){
           Solution obj;
           int n;
           cin>>n;
           vector<int> res(n);
           for(int i=0; i<n; i++){
               cin>>res[i];
           }
           int ans = obj.minimumSwaps(res);
           cout<<ans;
           return 0;
       }