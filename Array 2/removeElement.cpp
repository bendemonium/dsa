class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k, cnt=0;
        int i=0, j=size(nums)-1;
        while (i<=j){
            if (nums[j]==val) {
                cnt++; j--; 
                nums.pop_back();
                continue;
            }
            if (nums[i]==val) {
                swap(nums[i],nums[j]); 
            }
            if (nums[i]!=val) i++;
        }
        return size(nums);
    }
};




// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int cnt= count(nums.begin(),nums.end(),val);
//         int k= size(nums)-cnt;
//         int i=0, j=size(nums)-1;
//         while (i<=j){
//             if (nums[j]==val) {
//                 j--; 
//                 continue;
//             }
//             if (nums[i]==val) swap(nums[i],nums[j]); 
//             if (nums[i]!=val) i++;
//         }
//         for (int r=0;r<cnt;r++){
//             nums.pop_back();
//         }
//         return k;
//     }
// };