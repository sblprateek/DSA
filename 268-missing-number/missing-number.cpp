class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long sum=n*(n+1)/2;
        int sum2=0;

        for(auto x:nums)
            sum2+=x;
        
        return sum-sum2;

    }
};