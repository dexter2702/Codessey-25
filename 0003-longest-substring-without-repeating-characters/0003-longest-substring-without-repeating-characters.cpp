class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i = 0, j = 0, count = 0;
        int n = s.length();

        while(j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j++]);
                count = max(count, j-i);
            }
            else{
                while(i<n && st.find(s[j])!=st.end()){
                    st.erase(s[i]);
                    i++;
                }
            }
        }
        return count;
    }
};