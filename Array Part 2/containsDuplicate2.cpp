class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> dupe;
        int n=size(nums);
        for (int i=0;i<n;i++){
            if (i>k) dupe.erase(nums[i-k-1]);
            if (!dupe.insert(nums[i]).second) return true;
        }
        return false;
    }
};