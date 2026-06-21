
// time complexity : O(n)
//space complexity : O(1)

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int maxDistance(string moves) {
        int space = 0 , lr =0, ud = 0;
        for(char ch : moves){
            if(ch=='R'){
              lr++;
            }else if(ch=='L'){
                lr--;
            }else if(ch=='U'){
                ud++;
            }else if(ch=='D'){
                ud--;
            }else{
                space++;
            }
        }
        return space+abs(ud)+abs(lr);
    }
};


 int main(){
    Solution obj;
     string res;
     getline(cin,res);
     int ans = obj.maxDistance(res);
     cout<<ans;
    return 0;
 }