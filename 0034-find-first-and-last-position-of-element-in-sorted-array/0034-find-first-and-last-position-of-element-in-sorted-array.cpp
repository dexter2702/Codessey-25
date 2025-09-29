class Solution {
public:
    int firstPos(vector<int>arr, int low, int high, int k){
   int ans = -1;

   while(low<=high){
       int mid = (low+high)/2;
       if(arr[mid]==k){
           ans=mid;
           high=mid-1;
       }
       else if(arr[mid]<k){
           low = mid+1;
       }
       else{
           high = mid-1;
       }
   }
   return ans;
}

int lastPos(vector<int>arr, int low, int high, int k){
    int ans = -1;

   while(low<=high){
       int mid = (low+high)/2;
       if(arr[mid]==k){
           ans=mid;
           low=mid+1;
       }
       else if(arr[mid]<k){
           low = mid+1;
       }
       else{
           high = mid-1;
       }
   }
   return ans;
}
    vector<int> searchRange(vector<int>& arr, int k) {
        vector<int>ans;
        int lo = 0;
        int hi = arr.size()-1;
        int a = firstPos(arr,lo,hi,k);
        int b = lastPos(arr,lo,hi,k);
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};