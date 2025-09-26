class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size()-1;

        while(l<r){
            int mid = (l+r)/2;
            if(letters[mid] - target > 0) r = mid;
            else l = mid+1;
        }
        return (letters[l] - target) > 0 ? letters[l] : letters[0];
    }
};