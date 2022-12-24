class Solution {
public:
    void swap(int i,int j){
        int temp = i;
        i = j;
        j = temp;
    }
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        if (nums[i]!=0) i++;
        else{
            if (nums[j]!=0) swap(nums[i],nums[j]);
            else j++;
        }
    }
};