class Solution {
public:
    int compress(vector<char>& chars) {
       int n = chars.size();
    int write = 0;  // position to write compressed chars
    int i = 0;      // read pointer

    while (i < n) {
        char current = chars[i];
        int count = 0;

        // Count consecutive duplicates
        while (i < n && chars[i] == current) {
            i++;
            count++;
        }

        // Write the character
        chars[write++] = current;

        // Write the count (if > 1), digit by digit
        if (count > 1) {
            string cntStr = to_string(count);
            for (char c : cntStr) {
                chars[write++] = c;
            }
        }
    }

    return write; 
    }
};