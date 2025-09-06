class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxLen = 1, count=1;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]<nums[i+1]){
                count++;
                maxLen = max(maxLen, count);
            }else{
                count = 1;
            }
        }
        return maxLen;
    }
};