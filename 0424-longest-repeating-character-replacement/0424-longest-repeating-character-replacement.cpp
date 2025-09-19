class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int max_freq = 0;
        int maxLen = 0;
        vector<int>count(26,0);
        for(int right=0; right<s.length(); right++){
            count[s[right]-'A']++;
            max_freq = max(max_freq, count[s[right]-'A']);
            while((right-left+1)-max_freq>k){
                count[s[left]-'A']--;
                left++;
            }
            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};