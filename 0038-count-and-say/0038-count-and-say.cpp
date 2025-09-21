class Solution {
public:
    string helperFun(string str){
        int n = str.length();
        if (n <= 0) return "";
        int i = 1, count = 1;
        string ans = "";

        while(i<n){
            if(str[i]==str[i-1]){
                count++;
                i++;
            }
            else{
                ans += to_string(count);
                ans.push_back(str[i-1]);
                count = 1;
                i++;
            }
        }
        ans += to_string(count);
        ans.push_back(str[i-1]);
        return ans;
    }


    string countAndSay(int n) {
        if (n <= 0) return "";
       string res = "1";
       for(int i=2; i<=n; i++){
        res = helperFun(res);
       }
        return res;
    }
};