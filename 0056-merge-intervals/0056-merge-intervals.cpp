class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        
        sort(intervals.begin(), intervals.end(),
        [](const vector<int>&a, const vector<int>&b){
            return a[0] < b[0];
        });

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for(size_t i=1; i<intervals.size(); i++){
            auto &last = merged.back();
            const auto &curr = intervals[i];

            if(curr[0] <= last[1]){
                last[1] = max(last[1], curr[1]);
            }else{
                merged.push_back(curr);
            }
        }
        return merged;
    }
};