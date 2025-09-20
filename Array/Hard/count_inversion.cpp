#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int count_inversion(vector<int> &nums){
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){{
                if(nums[i] > nums[j]){
                    count++;
                }
            }}
        }
        return count;
    }

     
    int merge(vector<int> &nums, int low, int mid, int high)
    {
        vector<int> temp;
        int i = low;
        int j = mid + 1;
        int count = 0;

        while (i <= mid && j <= high)
        {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else{    
                count += mid - i + 1;
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i <= mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j <= high){
            temp.push_back(nums[j]);
            j++;
        }

        for(int i = low; i <= high; i++){
            nums[i] = temp[i - low];
        }
        return count;
    }

    int divide(vector<int> &nums, int low ,int high){
        int count = 0;
        if(low >= high) return count;
        int mid = (low + high) / 2;
        count += divide(nums, low, mid);
        count += divide(nums, mid + 1, high);
        count += merge(nums, low, mid, high);
        return count;
    }

    int mergesort(vector<int> &nums){
        return divide(nums, 0, nums.size() - 1);
    }
};

int main()
{
    Solution s;
    vector<int> v = {2, 4, 1, 3, 5};
    cout << s.mergesort(v); 
}
