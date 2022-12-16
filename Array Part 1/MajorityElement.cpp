class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> elems;
        int majority;
        int n = (nums.size()/2);
        for (int x:nums){
            int cnt=count(elems.begin(),elems.end(),x);
            if (cnt)
                continue;
            else{
                elems.push_back(x);
                int m = count(nums.begin(),nums.end(),x);
                if (m>n){
                    majority=x;
                    break;
                }  
            }
        }
        return majority;
        }
    };   