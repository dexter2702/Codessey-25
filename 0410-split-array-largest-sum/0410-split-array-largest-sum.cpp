class Solution {
public:
    int larSum(vector<int>&nums, int a){
        int n = nums.size();
        int count = 1, curr = 0;

        for(auto i: nums){
            if(curr + i <= a) curr+=i;
            else{
                count++;
                curr = i;
            }
        }
        return count;
    }


    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low < high){
            int mid = low + (high-low)/2;

            if(larSum(nums, mid) > k){
                low = mid + 1;
            }
            else high = mid;
        }
        return low;
    }
};