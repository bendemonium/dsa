class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> itxn(nums1.begin(),nums1.end());
        vector<int> res;
        for (int num:nums2){
            if (!itxn.insert(num).second){
                res.push_back(num);
                itxn.erase(num);
            }
            else itxn.erase(num);
        }
        return res;
    }
};