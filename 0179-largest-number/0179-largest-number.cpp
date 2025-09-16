class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>strs;
        strs.reserve(nums.size());
        
        for(int i: nums) strs.push_back(to_string (i));

        sort(strs.begin(), strs.end(), [](const string &a, const string &b) {
         return a + b > b + a;
    });
        if (strs.size() && strs[0] == "0") return "0";
        
        string res;
        for (auto &s : strs) res += s;
        return res;

    }
};