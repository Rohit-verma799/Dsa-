#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int findNumberApperasOnes_Brute(vector<int> &nums){
          for(int i = 0; i<nums.size(); i++){
            int cnt = 0;
            for(int j = 0; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
            if(cnt == 1){
                return nums[i];
            }
          }
          return -1;
    }

    int findNumberApperasOnes_Better(vector<int> &nums){
        unordered_map<int,int> map;
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]]++;
        }

        for(auto it : map){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }

    int findNumberApperasOnes_Optimal(vector<int> &nums){
        int result = 0;
        for(int i = 0; i<nums.size(); i++){
            result ^= nums[i];
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1,2,2,3,3,4,4};
    cout<<s.findNumberApperasOnes_Optimal(nums)<<endl;
}