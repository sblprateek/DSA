class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> st;

        for(auto x:nums){
            st.insert(x);
        }
        
        int index=0;

        for(auto it:st){
            nums[index++]=it;
        }
        

        return index;
    }
};