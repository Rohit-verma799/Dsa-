#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    void insertionsort(int arr[], int n , int i){
        if(i != n){
            int j = i;
            while(arr[j-1] > arr[j] && j > 0){
                swap(arr[j-1], arr[j]);
                j--;
            }

            insertionsort(arr,n,++i);
        }
        
    }
};

int main() {
    Solution s;
    int arr[] = {1,2,4,53,2,45,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    s.insertionsort(arr, n,1);
    for(int x : arr){
        cout << x << " ";
    }
    
}