#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i = 0; i < s.size() - 1; i++) {

            if(abs((s[i] - '0') - (s[i + 1] - '0')) > 2) {
                return false;
            }

        }
        return true;
    }
};

int main() {

    Solution obj;

    string s;

    getline(cin, s);

    bool val = obj.isAdjacentDiffAtMostTwo(s);

    cout << val << " ";

    return 0;
}