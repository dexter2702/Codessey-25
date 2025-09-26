class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;
        for(int i=0; i<k; i++) sum += nums[i];
        long long maxAvg = sum;
        for(int i=k; i<(int)nums.size(); i++){
            sum+=nums[i] -nums[i-k];
            maxAvg = max(maxAvg, sum);
        }
        return (double)maxAvg/k;
    }
};