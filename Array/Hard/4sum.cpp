#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    vector<vector<int>> foursum_1(vector<int> &nums,int target){
        set<vector<int>> set;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                unordered_set<int> st;
                for(int k = j+1; k<nums.size(); k++){
                  int sum = target - (nums[i] + nums[j] + nums[k]);
                  if(st.find(sum) != st.end()){
                    vector<int> temp = {nums[i],nums[j],nums[k],sum};
                    sort(temp.begin(), temp.end());
                     set.insert(temp);
                  }
                  st.insert(nums[k]);
                }
            }
        }

        return vector<vector<int>> (set.begin(), set.end());
    }

      vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<nums.size(); j++){
                if(j != i+1 && nums[j] == nums[j-1]) continue;

                int k = j+1;
                int l = nums.size()-1;

                while(k<l){

                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if(sum < target){
                        k++;
                    }else if(sum > target){
                        l--;
                    }
                    else{
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        v.push_back(temp);
                        k++;
                        l--;
                        while(k < l && nums[k] == nums[k-1]) k++;
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                }
            }     
        }

        return v;
    }

};

int main() {
    Solution s;
     
    vector<int> v = {1,0,-1,0,-2,2};

    vector<vector<int>> res = s.foursum_1(v,0);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    
}