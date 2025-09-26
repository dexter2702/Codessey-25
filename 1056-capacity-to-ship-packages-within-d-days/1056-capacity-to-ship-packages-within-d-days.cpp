#include<bits/stdc++.h>
class Solution {
public:
    bool can_ship(int cap, vector<int>weights, int days){
        int count = 1, curr = 0;

        for(auto w: weights){
            if(curr + w <= cap) curr+=w;
            else{
                count++;
                curr = w;
                if(count > days) return false;
            }
        }
        return true;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);

        while(low < high){
            int mid = low + (high-low)/2;

            if(can_ship(mid, weights, days)) high = mid;
            else low = mid+1;
        }
        return low;
    }
};