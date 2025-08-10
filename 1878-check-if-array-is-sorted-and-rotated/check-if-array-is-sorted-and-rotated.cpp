class Solution {
public:
    bool check(vector<int>& nums) {
        int size=nums.size();
        int breaks=0;
        

       for(int i=0; i<size; i++){
        if(nums[i]>nums[(i+1)%size])
        breaks++;
       } 

       return (breaks<=1);
    }
};