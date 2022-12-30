class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int cnt = count(arr.begin(),arr.end(),0);
        int n = size(arr);
        int j = cnt + n;
        for (int i = n-1;i>=0;i--){
            if (--j<n) arr[j]=arr[i];
            if (arr[i]==0 && --j<n) arr[j]=0;
        }
    }
};