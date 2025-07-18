#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    void RecursiveBubbleSort(int arr[], int n, int count){
        if(count != n-1){
           for(int i = 0; i<n-count-1; i++){
                if(arr[i] > arr[i+1]){
                    swap(arr[i], arr[i+1]);
                }
           }
           RecursiveBubbleSort(arr, n, ++count);
        }
    }
};

int main() {
    Solution s;
    int arr[] = {5,3,5,6,2,45,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    s.RecursiveBubbleSort(arr, n, count);

    for(int x : arr){
        cout << x << " ";
    }
    
}