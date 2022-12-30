class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0, j=n-1;
        int max = INT_MIN;
        while(i<j){
            int area = (j-i)*min(height[i],height[j]);
            if (area>max) max=area;
            if (height[i]>height[j]) j--;
            else i++;
        }
        return max;
    }
};