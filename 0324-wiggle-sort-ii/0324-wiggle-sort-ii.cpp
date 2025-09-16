class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return;

        vector<int>a = nums;
        sort(a.begin(), a.end());

        vector<int>res(n);

        int mid = (n+1)/2;
        int l = mid-1;
        int r = n-1;

        for(int i=0; i<n; i++){
            if((i&1)==0) res[i] = a[l--];
            else res[i] = a[r--];
        }
        nums = move(res);
    }
};