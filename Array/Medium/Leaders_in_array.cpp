#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> Leaders_Brute(vector<int> &nums){
    vector<int> v;
      for(int i = 0; i<nums.size(); i++){
        int val = nums[i];
        bool flag = true;
        for(int j = i+1; j<nums.size(); j++){
            if(!(nums[j] < val)){
               flag = false;
               break;
            }
        }
        if(flag){
        v.push_back(val);
        }
      }
    return v;
  }

  vector<int> Leaders_optimal(vector<int> &nums){
    int max = INT_MIN;
    vector<int> v;

    for(int i = nums.size()-1; i>=0; i--){
           if(nums[i] > max){
            v.push_back(nums[i]);
            max = nums[i];
           }
    }

    reverse(v.begin(), v.end());

    return v;
  }


  vector<int> LeetCode_Version(vector<int> &nums){ // replace the element with the maximum element in the right 
    int max =  arr[arr.size() - 1];
    nums[nums.size()-1] = -1;
    for(int i = nums.size()-2; i>=0; i--){
        int val = nums[i];
        nums[i] = max;
        if(val > max){
            max = val;
        }
    }
  }
};




int main() {
    Solution s;
    vector<int> v = {5,4,3,2,1};
    vector<int> ans = s.Leaders_optimal(v);
    for(int x: ans){
        cout << x;
    }
    
}