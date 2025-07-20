#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int partition(vector<int> &nums, int low, int high)
    {
        int pivot = nums[low];
        int i = low;
        int j = high;
        while (i < j)
        {
            while (nums[i] <= pivot && i <= high - 1)
            {
                i++;
            }
            while (nums[j] > pivot && j >= low + 1)
            {
                j--;
            }
            if (i < j)
            {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }
    void sort(vector<int> &nums, int low, int high)
    {
        if (low < high)
        {
            int pivotindex = partition(nums, low, high);
            sort(nums, low, pivotindex - 1);
            sort(nums, pivotindex + 1, high);
        }
    }

    int SecondLargest_Bruteforce(vector<int> &nums)
    {
        sort(nums, 0, nums.size() - 1);
        int largest = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] != largest)
            {
                return nums[i];
            }
        }
        return -1;
    }

    int SecondLargest_Better(vector<int> &nums)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
            }
        }
        int secondmaxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > secondmaxi && nums[i] != maxi)
            {
                secondmaxi = nums[i];
            }
        }

        return secondmaxi;
    }

    int SecondLargest_Optimal(vector<int> &nums)
    {
        int maxi = nums[0];
        int secondmaxi = INT_MIN;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > maxi)
            {
                secondmaxi = maxi;
                maxi = nums[i];
            }
            else if (nums[i] > secondmaxi && nums[i] != maxi)
            {
                secondmaxi = nums[i];
            }
        }

        return secondmaxi;
    }
};

int main()
{
    Solution s;
    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << s.SecondLargest_Optimal(v);
}