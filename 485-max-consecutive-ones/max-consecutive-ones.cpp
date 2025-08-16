class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=INT_MIN;
        int count=0;

        for(int x:nums){
            if(x==0)
            count=0;
            else count++;
        
        maxi=max(maxi,count);
        
        }


        return maxi;
    }
};