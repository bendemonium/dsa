class Solution {
public:
    string reverseWords(string s) {
        int n = size(s);
        int i;
        for (int j=0;j<n;j++){
            if (j==0) i=0;
            else if (s[j]==' '){
                for (int k=0;k<(j-i)/2;k++){
                    swap(s[i+k],s[j-k-1]);
                }
                i=j+1;
                cout<<i<<' '<<j<<endl;
            }
            else if (j==n-1){
                for (int k=0;k<(j-i+1)/2;k++){
                    swap(s[i+k],s[j-k]);
                }
            }
        }
        return s;
    }
};