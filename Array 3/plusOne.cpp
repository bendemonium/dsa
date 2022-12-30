class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i= size(digits)-1;
        while (i>=0){
            if (i!=0){
                digits[i]+=1;
                if (digits[i]>=10){
                    digits[i]%=10;
                    i--;
                }
                else break;
            }
            if (i==0){
                digits[i]+=1;
                if (digits[i]>=10){
                    digits[i]%=10;
                    digits.insert(digits.begin(), 1);
                }
                i--;
            }
        }
        return digits;
    }
};