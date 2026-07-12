#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sh,sm,ss;
        int eh,em,es;
        sh=stoi(startTime.substr(0,2));
         sm=stoi(startTime.substr(3,2));
         ss=stoi(startTime.substr(6,2));

         eh=stoi(endTime.substr(0,2));
         em=stoi(endTime.substr(3,2));
         es=stoi(endTime.substr(6,2));

        int starttime=sh*3600+sm*60+ss;
        int endtime=eh*3600+em*60+es;
        return endtime-starttime;
        
    }
};

 int main(){
    Solution obj;
    string res1;
    getline(cin,res1);
    string res2;
    getline(cin,res2);
    int ans = obj.secondsBetweenTimes(res1, res2);
    cout<<ans;
    return 0;
 }