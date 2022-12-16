class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        cout<<nums[0];
        int n=nums.size();
        cout<<n;
        vector<int> runsum;
        runsum.push_back(nums[0]);
        for (int i=1;i<n;i++){
            int sum_el=runsum[i-1]+nums[i];
            runsum.push_back(sum_el);
        }
        return runsum;
    }
};