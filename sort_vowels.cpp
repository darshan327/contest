 // Leetcode number : 3913. Sort Vowels by Frequency
  
  // time complexity : O(nlogn)
  // space complexity :O(n)

  class Solution {
public:
      
      bool isvowel(char v){
          if(v=='a' || v=='e' || v=='i' || v=='o' || v=='u'){
              return true;
          }
          return false;
      }
    
    string sortVowels(string s) {
        vector<char> res;
        for(int i=0; i<s.size(); i++){
            if(isvowel(s[i])){
                res.push_back(s[i]);
            }
        }
             unordered_map<char,int> freq;
               for(char c : res){
                 freq[c]++;
                }

             unordered_map<char,int> firstPos;
        for(int i=0; i<s.size(); i++){
            if(isvowel(s[i]) && firstPos.find(s[i]) == firstPos.end()){
                firstPos[s[i]] = i;
            }
        }

          sort(res.begin(), res.end(), [&](char a, char b){
            if(freq[a] == freq[b])
                return firstPos[a] < firstPos[b];  
            return freq[a] > freq[b];             
        });

        int j=0;
        for(int i=0; i<s.size(); i++){
             if(isvowel(s[i])){
                 s[i]=res[j];
                 j++;
             }
        }
        return s;
    }
};