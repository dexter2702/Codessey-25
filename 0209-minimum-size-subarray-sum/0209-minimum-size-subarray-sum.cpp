class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX, count = 0;
        int left = 0, right = 0;
        int sum = 0;

        while(right < nums.size()){
            sum += nums[right++];
            while(sum>=target){
                minLen = min(minLen, right-left);
                sum -= nums[left++];
            }
        }     
        return (minLen == INT_MAX) ? 0 : minLen;   
    }
};