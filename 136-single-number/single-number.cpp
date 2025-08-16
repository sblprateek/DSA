class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<long long,int> mp;

        for(auto x:nums){
            mp[x]++;
        }

        for(auto [key,val]:mp){
            if(val==1)
            return key;
        }


        return -1;
    }
};