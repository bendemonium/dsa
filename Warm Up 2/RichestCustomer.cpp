class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows=accounts.size();
        int columns=accounts[0].size();
        int max=0;
        for (int i=0;i<rows;i++)
        {
            int rowsum=0;
            for (int j=0;j<columns;j++){
                rowsum+=accounts[i][j];
            }
            if (rowsum>max)
                max=rowsum;      
        }
        return max;
    }
};