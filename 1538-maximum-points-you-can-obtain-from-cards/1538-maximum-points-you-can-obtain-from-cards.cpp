class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int mScore = 0; int sum = 0;
        int n = cardPoints.size();

        for(int i=n-k; i<n; i++){
            sum+=cardPoints[i];
        }
        mScore = max(mScore, sum);

        for(int i=0; i<k; i++){
            sum += cardPoints[i] - cardPoints[n-k+i];
            mScore = max(mScore, sum);
        }
        return mScore;
    }
};