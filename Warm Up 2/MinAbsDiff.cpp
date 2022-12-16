class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min = arr[1]-arr[0];
        vector<vector<int>> mad;
        for (int i=0;i<n-1;i++){
            vector<int> pair;
            int curr_diff = arr[i+1]-arr[i];
            if (curr_diff==min){
                pair.push_back(arr[i]);
                pair.push_back(arr[i+1]);
                mad.push_back(pair);
                pair.clear();
            }
            else if (curr_diff<min){
                min=curr_diff;
                mad.clear();
                pair.push_back(arr[i]);
                pair.push_back(arr[i+1]);
                mad.push_back(pair);
                pair.clear();
            }
        }
        return mad;
    }
};