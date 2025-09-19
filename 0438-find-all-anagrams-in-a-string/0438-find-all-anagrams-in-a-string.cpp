class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.length(), m = s.length();
        vector<int>need(26,0), window(26,0);
        vector<int>ans;
        if(m<n) return ans;

        for(int i=0; i<n; i++){
            need[p[i]-'a']++;
            window[s[i]-'a']++;
        }

        if(need == window) ans.push_back(0);

        for(int i=n; i<m; i++){
            window[s[i]-'a']++;
            window[s[i-n]-'a']--;
            if(window==need) ans.push_back(i-n+1);
        }
        return ans;      
    }
};