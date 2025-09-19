#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    vector<vector<int>> merge(vector<vector<int>> &nums){
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++){
            int st = nums[i][0];
            int end = nums[i][1];
            
            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }
            
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j][0] <= end){
                    end = max(end, nums[j][1]);
                } else {
                    break;
                }
            }

            ans.push_back({st, end});
        }
        
        return ans;
    }

    vector<vector<int>> merge_optimal(vector<vector<int>> &nums){
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++){
            if(ans.empty() || ans.back()[1] < nums[i][0]){
                ans.push_back(nums[i]);
            }else{
                ans.back()[1] = max(ans.back()[1], nums[i][1]);
            }
            
        }
        
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> v = {{1,3},{2,4},{6,8},{9,10}};
    vector<vector<int>> v1 = s.merge_optimal(v);
    
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v1[i].size(); j++){
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }
}
