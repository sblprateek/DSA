class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();

        vector<int> ans(n);
        int i=0;
        for(int x:nums){
            if(x!=0){
                ans[i++]=x;
            }
        }

    nums=ans;

    }
};