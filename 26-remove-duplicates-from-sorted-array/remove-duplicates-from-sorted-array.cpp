class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0, r=0;

        while(r<nums.size()){

            if(nums[l]!=nums[r]){
            l++;
            nums[l]=nums[r];
            }

            r++;
        }


        return l+1;
    }
};