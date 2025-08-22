#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    int maxProfit(vector<int> nums){
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < minPrice){
                minPrice = nums[i];
            }else{
                maxProfit = max(maxProfit , nums[i] - minPrice);
            }
        }
        return maxProfit;
    }
};

int main() {
    Solution s;
    vector<int> v = {3,2,1,6,7,8};
    cout << s.maxProfit(v);
    
}