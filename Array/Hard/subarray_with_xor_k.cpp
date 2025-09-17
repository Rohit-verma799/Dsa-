#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    int subarraycnt_1(vector<int> &nums , int k){
           int cnt = 0;
           for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                int xr = 0;
                for(int p = i; p<=j; p++){
                    xr ^= nums[p];
                }
                if(xr == k){
                    cnt++;
                }
            }
           }
           return cnt;
    }
    int subarraycnt_2(vector<int> &nums , int k){
           int cnt = 0;
           for(int i = 0; i<nums.size(); i++){
            int xr = 0;
            for(int j = i; j<nums.size(); j++){
                xr ^= nums[i];
                if(xr == k){
                    cnt++;
                }
            }
           }
           return cnt;
    }
    int subarraycnt_optimal(vector<int> &nums , int k){
           int cnt = 0;
           unordered_map<int,int> map;
           map[0]++;
           int xr = 0;
           for(int i = 0; i<nums.size(); i++){
               xr ^= nums[i];
               int x = xr ^ k;
               cnt += map[x];
               map[xr]++;
           }
           return cnt;
    }
};

int main() {
    Solution s;
    vector<int> v = {4,2,2,6,4};
    int k = 4;
    cout << s.subarraycnt_1(v,k);
    cout << s.subarraycnt_2(v,k);
    cout << s.subarraycnt_optimal(v,k);
}