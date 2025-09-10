#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> Threesum(vector<int> &nums) {
        set<vector<int>> st;  
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }

    vector<vector<int>> Threesum_1(vector<int> &nums) {
    set<vector<int>> triplets;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        unordered_set<int> seen;
        for (int j = i + 1; j < n; j++) {
            int third = -(nums[i] + nums[j]);
            if (seen.count(third)) {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                triplets.insert(temp);
            }
            seen.insert(nums[j]);
        }
    }

    return vector<vector<int>>(triplets.begin(), triplets.end());
}
 vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        vector<vector<int>> vec;
        for(int i = 0; i<nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1] ) continue;
            int j = i+1;
            int k = nums.size()-1;
            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum < 0){
                    j++;
                }else if(sum > 0){
                    k--;
                }else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    vec.push_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;
                }
            }

        }
        return vec;
    }

};

int main() {
    Solution s;
    vector<int> v = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> res = s.Threesum_1(v);

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
