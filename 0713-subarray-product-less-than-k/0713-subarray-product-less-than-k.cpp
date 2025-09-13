class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<1) return 0;
        long long prod = 1;
        int left = 0;
        long long count = 0;

        for(int i=0; i<nums.size(); i++){
            prod *= nums[i];
            while(prod >= k && left <= i){
                prod /= nums[left++];
            }
            count += (i - left + 1);
        } 
        return count;
    }
};