// Leetcode number : 3908. Valid Digit Number

   // time complexity : O(logn)
   // space complexity : O(logn)

  class Solution {
   public:
    bool validDigit(int n, int x) {
       string s=to_string(n);
        if(s[0]-'0'==x) return false;
        for(int i=1; i<s.size(); i++){
            if(s[i]-'0'==x){
                return true;
            }
        }
        return false;
       
    }
};

      // time complexity : O(logn)
       //space complexity : O(logn)
          class Solution {
          public:
           bool validDigit(int n, int x) {
         string s=to_string(n);
         string a=to_string(x);
        if(s[0]-'0'==x) return false;
          if(s.find(a)!=string::npos){
              return true;
          }
        return false;
    }
};

   // time complexity : O(logn)
   // space complexity : O(1)
bool validDigit(int n, int x) {
    if(n % 10 == x && n < 10) return false; 

    int first = n;
    while(first >= 10) {
        first /= 10;
    }
    if(first == x) return false;

    while(n > 0) {
        if(n % 10 == x) return true;
        n /= 10;
    }
    return false;
}