class Solution {
public:
    string minWindow(string s, string t) {
         if(s.empty() || t.empty()) return "";
        unordered_map<char,int>mp;
        int minLen = INT_MAX;
        int count = 0, l = 0, r = 0;
        int startIndex = -1;

        for(auto c: t){
            mp[c]++;
        }
        int reqd = mp.size();
        while(r<s.size( )){
            if(mp[s[r]]>0){
                count++;
            }
            mp[s[r]]--;
            while(count==t.length()){
                if(r-l+1<minLen){
                    minLen = r-l+1;
                    startIndex = l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0) count = count - 1;
                l++;
            }
            r=r+1;
        }
        return startIndex == -1 ? "":s.substr(startIndex, minLen);
    }
};