class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int row_mod= n/2;
        // flipping rows
        for (int i=0;i<row_mod;i++){
            vector<int> temp=matrix[n-i-1];
            matrix[n-i-1]=matrix[i];
            matrix[i]=temp;
        }
        // transpose
        for (int i=0;i<n;i++){
            for (int j=i;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
};