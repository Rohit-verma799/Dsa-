#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    int Maximum_sum_Brute(vector<int> &nums){
       int sum = 0;
       int maxSum = INT_MIN;
       for(int i = 0; i<nums.size(); i++){
         for(int j = i; j<nums.size(); j++){
            sum += nums[j];
            maxSum = max(maxSum, sum);
         }
         sum = 0;
       }
       return maxSum;
    }

    int Maximum_sum_Optimal(vector<int> &nums){
        // Kadane's algo
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            maxSum = max(maxSum, sum);
            if(sum < 0){
                sum = 0;
            }
        }

        return maxSum;
    }
    vector<int> Maximum_sum_Optimal_with_subarray(vector<int> &nums) {
        // Kadane's algorithm + subarray tracking
        int sum = 0, maxSum = INT_MIN;
        int start = 0, end = 0, st = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum == 0) st = i;   

            sum += nums[i];

            if (sum > maxSum) {
                maxSum = sum;
                start = st;
                end = i;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        vector<int> v;
        for (int i = start; i <= end; i++) {
            v.push_back(nums[i]);
        }
        return v;
    }
};


int main() {
    Solution s;
    vector<int> v = {2, 3, -8, 7, -1, 2, 3};
   cout << s.Maximum_sum_Brute(v) << endl;
   cout << s.Maximum_sum_Optimal(v) << endl;
}