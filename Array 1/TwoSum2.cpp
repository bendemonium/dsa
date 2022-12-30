class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices;
        int n=numbers.size();
        int stop= target/2;
        int found=0;
        for (int i=0;i<n;i++){
            int add1 = numbers[i];
            if (i>0 && add1==numbers[i-1])
                continue;
            for (int j=i+1;j<n;j++){
                if (numbers[i]+numbers[j]==target){
                    indices.push_back(i+1);
                    indices.push_back(j+1);
                    found=1;
                    break;
                }
                if (numbers[j]>=target-numbers[i]){
                    break;
                }
            if (found==1)
                break;
            }
        }
        return indices;
    }
};