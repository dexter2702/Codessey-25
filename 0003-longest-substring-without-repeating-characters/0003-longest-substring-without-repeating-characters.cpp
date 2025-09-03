class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0; int count = 0;
        int left = 0;

        unordered_set<char>st;

        for(int i=0; i<s.length(); i++){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
                count++;
                maxLen = max(maxLen, count);
            }
            else{
                while(st.find(s[i])!=st.end()){
                    st.erase(s[left]);
                    left++;
                }
                st.insert(s[i]);
                count = i-left+1;
                maxLen = max(maxLen, count);
            }
        }
        return maxLen;
    }
};