class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto p : mp){
          vector<int> res=p.second;
            if(res.size()==3){
                if(res[1]-res[0]==res[2]-res[1]){
                    count++;
                }
            }
        }
        return count;
    }
};