class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<int> row0, row1;
        row0.push_back(1);
        row1.push_back(1);
        row1.push_back(1);
        if (n==0)
            return row0;
        else if (n==1)
            return row1;
        else{
            vector<int> row_n;
            vector<int> prev;
            prev=getRow(n-1);
            row_n.push_back(1);
            for (int i=1;i<n;i++){
                int elem_n=prev[i-1]+prev[i];
                row_n.push_back(elem_n);
            }
            row_n.push_back(1);
            return row_n;
        }
    }
};