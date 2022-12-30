class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt=0, s=size(flowerbed);
        bool set = false;
        int emp=0; int f=0;
        for(int j=0;j<s;j++){
            if (flowerbed[j]==0){
                emp++;
                if (j==s-1){
                    if (f==0 && flowerbed[0]==0) cnt+= (emp+1)/2;
                    else cnt+= (emp)/2;
                }
            }
            if (flowerbed[j]==1){
                if (f==0 && flowerbed[0]==0){
                    cnt+= (emp)/2;
                    emp=0; f=1;
                }
                else{
                    cnt+= (emp-1)/2;
                    emp=0;
                }
                }
            if (cnt>=n) set=true;
        }
        return set;
    }
};