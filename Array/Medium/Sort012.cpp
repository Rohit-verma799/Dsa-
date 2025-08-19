#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums, int low, int high) {
    int pivot = nums[low];
    int i = low, j = high;
    while (i < j) {
        while (i <= high && nums[i] <= pivot) i++;
        while (j >= low && nums[j] > pivot) j--;
        if (i < j) swap(nums[i], nums[j]);
    }
    swap(nums[low], nums[j]);
    return j;
}

void quickSort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pivot_index = partition(nums, low, high);
        quickSort(nums, low, pivot_index - 1);
        quickSort(nums, pivot_index + 1, high);
    }
}

void sort012_Brute(vector<int>& nums) {
    quickSort(nums, 0, nums.size() - 1);
}


void sort012_Better(vector<int> &nums){
    int zero = 0;
    int one = 0;
    int two = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == 0){
            zero++;
        }else if(nums[i] == 1){
            one++;
        }else{
            two++;
        }
    }
    int u = 0;
    for(int i = 0; i<zero; i++){
        nums[u++] = 0;
    }
    for(int i = 0; i<one; i++){
         nums[u++] = 1;
    }
    for(int i = 0; i<two; i++){
        nums[u++] = 2;

    }
}

void sort012_optimal(vector<int> &nums){
    // Dutch National Flag Algo
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    while(mid <= high){
      if(nums[mid] == 0){
        swap(nums[low], nums[mid]);
         low++;
         mid++;
      } else if(nums[mid] == 1){
        mid++;
      }else{
        swap(nums[mid],nums[high]);
        high--;
      }

    }
}

int main() {

    vector<int> nums = {0,2,1,2,0,1,0};
    sort012_optimal(nums);
    for(int x : nums) cout << x << " ";
}
