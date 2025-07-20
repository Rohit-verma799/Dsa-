#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    bool Check_Sorted_or_not(vector<int> &nums){
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> v = {1,2,3,5,4,5};
    cout<<s.Check_Sorted_or_not(v);
    
}