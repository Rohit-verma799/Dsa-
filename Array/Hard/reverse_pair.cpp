#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    int reversepairs_brute(vector<int> &nums){
        
        int cnt = 0;
        for(int i =0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] > 2 * nums[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }

    void merge(vector<int> &nums, int low, int mid, int high) {
        vector<int> temp(high - low + 1);
        int i = low, j = mid + 1, k = 0;

        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        while (i <= mid) {
            temp[k++] = nums[i++];
        }
        while (j <= high) {
            temp[k++] = nums[j++];
        }

        for (int t = 0; t < temp.size(); t++) {
            nums[low + t] = temp[t];
        }
    }

    int countPairs(vector<int> &nums, int low, int mid, int high) {
        int j = mid + 1;
        int cnt = 0;
        for (int i = low; i <= mid; i++) {
            while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            cnt += (j - (mid + 1));
        }
        return cnt;
    }

    int divide(vector<int> &nums, int low, int high) {
        if (low >= high) return 0;

        int mid = (low + high) / 2;
        int cnt = 0;

        cnt += divide(nums, low, mid);
        cnt += divide(nums, mid + 1, high);
        cnt += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);

        return cnt;
    }

    int reversepairs_optimal(vector<int> &nums) {
        return divide(nums, 0, nums.size() - 1);
    }
};



int main() {
    Solution s;
    vector<int> v =  {1,3,2,3,1};
    cout << s.reversepairs_optimal(v);
    
}