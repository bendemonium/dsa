class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros= count(nums.begin(),nums.end(),0);
        remove(nums.begin(),nums.end(),0);
        for (int x:nums){
            cout<<x<<' ';
        }
        for (int i=0;i<zeros;i++){
            nums.pop_back();
        }
        for (int i=0;i<zeros;i++){
            nums.push_back(0);
        }
    }
};
