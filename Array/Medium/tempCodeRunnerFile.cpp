#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    int subarraySum_brute(vector<int> &nums ,int r){
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                int sum = 0;
                for(int k = i; k<=j; k++){
                    sum += nums[k];
                    if(sum == r){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,3};
    int r = 3;
    cout << s.subarraySum_brute(v,r);
}