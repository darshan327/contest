class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int cntX = 0, cntY = 0;
        string others = "";

        for (char c : s) {
            if (c == x)
                cntX++;
            else if (c == y)
                cntY++;
            else
                others += c;
        }

        string ans = "";
        ans += string(cntY, y);
        ans += others;
        ans += string(cntX, x);

        return ans;
    }
};