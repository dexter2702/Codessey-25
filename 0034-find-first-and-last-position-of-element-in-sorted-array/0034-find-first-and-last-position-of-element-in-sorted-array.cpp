class Solution {
public:
    int firstPos(vector<int>nums, int low, int high, int target){
        int ans = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                ans = mid;
                high = mid-1;
            }
            else if(nums[mid]<target) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }

    int lastPos(vector<int>nums, int low, int high, int target){
        int ans = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                ans = mid;
                low = mid+1;
            }
            else if(nums[mid]<target) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res;
        int n = nums.size();
        

        int low = 0, high = n-1;

        int a = firstPos(nums, low, high, target);
        int b = lastPos(nums, low, high, target);

        res.push_back(a);
        res.push_back(b);
        return res;
    }
};