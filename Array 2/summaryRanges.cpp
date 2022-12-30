class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=size(nums);
        vector<string> ranges;
        if (n==0) return ranges;
        int ll=nums[0], ul;
        if (n==1) ranges.push_back(to_string(ll));
        else {
            for (int i=1;i<n;i++){
                if (nums[i-1]+1==nums[i] && i!=n-1) continue;
                else if (nums[i-1]+1==nums[i] && i==n-1){
                    ul = nums[i];
                    if (ll==ul) ranges.push_back(to_string(ll));
                    else ranges.push_back(to_string(ll)+"->"+to_string(ul));
                }
                else{
                    ul = nums[i-1];
                    if (ll==ul) ranges.push_back(to_string(ll));
                    else ranges.push_back(to_string(ll)+"->"+to_string(ul));
                    ll= nums[i];
                    if (ll==nums[n-1]) ranges.push_back(to_string(ll));
                }
            }
        }
        return ranges;
    }
};