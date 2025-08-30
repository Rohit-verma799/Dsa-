#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    bool find(vector<int> &nums , int element){
         for(int i = 0; i<nums.size(); i++){
            if(nums[i] == element){
                return true;
            }

         }
         return false;
    }
    int Longest_consecutive_sequenece_brute(vector<int> &nums){
        int maxCount = 0;
        for(int i = 0; i<nums.size(); i++){
            int cnt = 1;
            int element = nums[i];
            while(find(nums, element+1)){
                cnt++;
                element++;
            }
         maxCount = max(maxCount, cnt);
         cnt = 1;
        }

        return maxCount;
    }

    int Longest_consecutive_sequenece_better(vector<int> &nums){
       sort(nums.begin(), nums.end());
       int count = 1;
       int maxCount = 0;
       for(int i= 0; i<nums.size()-1; i++){
          if(nums[i] == nums[i+1]){
             continue;
          }
          if(nums[i]+1 == nums[i+1]){
            count++;
          }else{
            maxCount = max(maxCount,count);
            count = 1;
          }

       }
       return max(maxCount , count);
    }

     int Longest_consecutive_sequenece_optimal(vector<int> &nums){
        unordered_set<int> st;
        for(int x : nums){
            st.insert(x);
        }
        int maxCount = 0;
        for(int x : st){
            if(st.find(x-1) == st.end()){
                int curr = x;
                int count = 1;
                while(st.find(curr+1) != st.end()){
                    count++;
                    curr++;
                }
                maxCount = max(maxCount,count);

            }
        }
        return maxCount;
     }
};

int main() {
    Solution s;
    vector<int> v = {100,200,1,2,3,4};
    vector<int> v1 = {100,200,1,2,2,3,4};
    vector<int> v2 = {100,200,1,2,3,4,300};
    cout << s.Longest_consecutive_sequenece_brute(v);
    cout << s.Longest_consecutive_sequenece_better(v1);
    cout << s.Longest_consecutive_sequenece_optimal(v2);
    
}