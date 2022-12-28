class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = size(nums);
        int i=0;
        int j=1;
        while (i<n && j<n){
            if (nums[i]==0 && nums[j]!=0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            else{
                if (nums[i]!=0) i++;
                if (nums[j]==0 || i==j) j++;
            }
        }
    }
};