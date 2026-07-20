#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        return ((start[0] + start[1]) % 2) == ((target[0] + target[1]) % 2);
    }
};

  int main(){
    Solution obj;
    int n;
    for(int i=0; i<2; i++){
        vector<int> start(2), target(2);
        cin >> start[i] >> target[i];
        if(obj.canReach(start, target)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
  }