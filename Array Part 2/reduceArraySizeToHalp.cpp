class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n= size(arr), min=1, c=1;
        vector<int> freq;
        for (int i=0;i<n;i++){
            if (i==n-1) freq.push_back(c);
            else if (arr[i]==arr[i+1]) c++;
            else {
                freq.push_back(c);
                c=1;
            }
        }
        sort(freq.begin(),freq.end());
        int th = n/2, sum=0;
        for (int i=size(freq)-1;i>=0;i--){
            sum+=freq[i];
            if (sum < th) min+=1;
            else break;
        }
        return min;
    }
};