class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int left = 0, maxLen = 0;

        for(int right=0; right<(int)s.size(); right++){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};