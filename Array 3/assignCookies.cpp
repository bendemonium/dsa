class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=size(g)-1, j=size(s)-1;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt=0;
        while (i>=0 && j>=0){
            if (s[j]>=g[i]){
                cnt++; j--; i--;
            }
            else if (s[j]<g[i]) i--;
        }
        return cnt;
    }
};