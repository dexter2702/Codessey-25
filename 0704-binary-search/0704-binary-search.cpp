class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, hi = n-1;
        while(low<=hi){
            int mid = (low+hi)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) low = mid+1;
            else hi = mid-1;
        }
        return -1;
    }
};