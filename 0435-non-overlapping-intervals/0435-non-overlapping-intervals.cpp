class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()) return 0;

        sort(intervals.begin(), intervals.end(),
        [](const vector<int>&a, const vector<int>&b){
            return a[1] < b[1];
        });

        int removed = 0;
        int last_end = intervals[0][1];

        for(size_t i=1; i<intervals.size(); i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(start < last_end){
                ++removed;
            }else{
                last_end = end;
            }
        }
        return removed;
    }
};