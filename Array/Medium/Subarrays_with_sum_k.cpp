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
                }
                if(sum == r){
                    count++;
                }
            }
        }
        return count;
    }

    int subarraySum_better(vector<int> &nums, int k){
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            int sum = 0;
            for(int j = i; j<nums.size(); j++){
                sum += nums[j];
                if(sum == k){
                    count++;
                }

            }
        }
        return count;
    }
    
    int subarraySum_optimal(vector<int> &nums , int k){
        unordered_map<int,int> map;
        int cnt = 0;
        int sum = 0;
        map[0]++;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            int rem = sum -k;
            if(map.find(rem) != map.end()){
                cnt += map[rem];
            }
            map[sum]++;
        }

        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,1,-1,1,1,1};
    int r = 3;
    cout << s.subarraySum_brute(v,r);
    cout << s.subarraySum_better(v,r);
    cout << s.subarraySum_optimal(v,r);
}