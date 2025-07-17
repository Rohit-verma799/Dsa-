#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partition(int arr[], int low ,int high){
        int pivot = arr[low];
        int i = low;
        int j = high;
        while(i < j){
            while(arr[i] <= pivot && i <= high - 1){
                i++;
            }
            while(arr[j] > pivot && j >= low + 1){
                j--; 
            }

            if(i < j){
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        return j;
    }

    void QuickSort(int arr[], int low, int high){
        if(low < high){
            int pivotindex = partition(arr, low, high);
            QuickSort(arr, low, pivotindex - 1);
            QuickSort(arr, pivotindex + 1, high);
        }
    }
};

int main() {
    Solution s;
    int arr[] = {4,3,5,6,2,7,1,8,9};
    int n = (sizeof(arr)/sizeof(arr[0])) - 1;

    s.QuickSort(arr, 0, n); 

    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}
