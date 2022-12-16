class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<vector<int>> tran;
        for (int i=0;i<cols;i++){
            vector<int> new_row;
            for (int j=0;j<rows;j++){
                new_row.push_back(matrix[j][i]);
            }
            tran.push_back(new_row);
        }
        return tran;
    }
};