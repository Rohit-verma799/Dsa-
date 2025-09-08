#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
     vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int x : nums){
            map[x]++;
        }
        vector<int> v;
        int n = nums.size()/3;
        for(auto x : map){
            if(x.second > n){
                v.push_back(x.first);
            }
        }

        return v;
    }
    vector<int> majorityElement(vector<int>& nums) {
       int cnt1 = 0;
        int cnt2 = 0;
        int ele1;
        int ele2;
        for(int i = 0; i<nums.size(); i++){
            if(cnt1 == 0 && nums[i] != ele2){
                cnt1 = 1;
                ele1 = nums[i];
            }else if(cnt2 == 0 && nums[i] != ele1){
                cnt2 = 1;
                ele2 = nums[i];
            }else if(ele1 == nums[i]){
                cnt1++;
            }else if(ele2 == nums[i]){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        int n = nums.size()/3;
        for(int i = 0; i<nums.size(); i++){
            if(ele1 == nums[i]){
                cnt1++;
            }
            else if(ele2 == nums[i]){
                cnt2++;
            }
        }
        vector<int> v;
        if(cnt1 > n){
            v.push_back(ele1);
        }
        if(cnt2 > n){
            v.push_back(ele2);
        }
        
       
        
        return v;
    }
};

int main() {
    Solution s;
    
}