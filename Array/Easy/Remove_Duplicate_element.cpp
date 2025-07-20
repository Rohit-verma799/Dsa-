#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    // 1. Brute_apporach
    int Remove_Duplicate_Element(vector<int> &nums) {
      set<int> s(nums.begin(), nums.end());
      int count = 0;
      for(auto it : nums){
         nums[count++] = it;
      }

      return count;

    }
};

int main() {
    Solution s;
    vector<int> v  = {1,1,2,2,2,3,3,3};
    int n = s.Remove_Duplicate_Element(v);
    for(int i = 0; i<n; i++){
        cout << v[i];
    }
    
}