class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum, best = nums[0]+nums[1]+nums[2];
        for(int i=0; i<n-2; i++){
            int l = i + 1, r = n - 1;
            while(l<r){
                sum = nums[i] + nums[l] + nums[r];
                if(abs(sum-target) < abs(best-target)){
                    best = sum;
                } if(sum==target) return target;
                else if(sum < target) l++;
                else r--;
            }
        }
        return best;
    }
};