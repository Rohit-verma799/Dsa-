#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    int floorInSortedArray(vector<int>& nums, int x) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        }
    
        return ans;
    }

    int ceilInSortedArray(vector<int>& nums, int x) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        }
    
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> v = {1, 2, 4, 6, 8, 9};
    cout << s.floorInSortedArray(v, 5) << endl; 
    cout << s.ceilInSortedArray(v, 5) << endl;  

}