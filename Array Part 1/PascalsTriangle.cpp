class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> pascal;
        vector<int> prev_row;
        for (int i=0;i<n;i++){
            vector<int> row;
            if (i==0)
                row.push_back(1);
            else if (i==1){
                row.push_back(1);
                row.push_back(1);
            }
            else {
                row.push_back(1);
                for (int j=1;j<i;j++){
                    int elem_n=prev_row[j-1]+prev_row[j];
                    row.push_back(elem_n);
                }
                row.push_back(1);
            }
            pascal.push_back(row);
            prev_row=row;
        }
        return pascal;
    }
};