class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> elems;
        vector<int> majority;
        int n = (nums.size()/3);
        for (int x:nums){
            int cnt=count(elems.begin(),elems.end(),x);
            if (cnt)
                continue;
            else{
                elems.push_back(x);
                int m = count(nums.begin(),nums.end(),x);
                if (m>n){
                    majority.push_back(x);
                }  
            }
        }
        return majority;
    }
};