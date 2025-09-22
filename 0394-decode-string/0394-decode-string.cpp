class Solution {
public:
    string decodeString(string s) {
        stack<int>counts;
        stack<string>contexts;
        string curr = "";
        int k = 0;

        for(char ch:s){
            if(isdigit(ch)){
                k = k*10 + (ch-'0');
            }
            else if(ch == '['){
                counts.push(k);
                contexts.push(curr);
                k = 0;
                curr = "";
            }
            else if(ch==']'){
                int repeat = counts.top(); counts.pop();
                string prev = contexts.top(); contexts.pop();

                string expanded;
                for(int i=0; i<repeat; i++){
                    expanded += curr;
                }
                curr = prev + expanded;
            }else{
                curr.push_back(ch);
            }
        }
        return curr;
    }
};