#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    // 1. Brute_apporach
    int Remove_Duplicate_Element(vector<int> &nums) {
      set<int> s(nums.begin(), nums.end());
      int count = 0;
      for(auto it : s){
         nums[count++] = it;
      }

      return count;

    }

    // 2 .Optimal_apporach
    int Remove_Duplicate_Element1(vector<int> &nums) {
        int count = 1;
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] != nums[i+1]){
                nums[count++] = nums[i+1];
            }

        }
        return count;
    }


};

int main() {
    Solution s;
    vector<int> v  = {1,1,2,2,2,3,3,3};
    // int n = s.Remove_Duplicate_Element(v);
    int n1 = s.Remove_Duplicate_Element1(v);
    for(int i = 0; i<n1; i++){
        cout << v[i];
    }
    
}