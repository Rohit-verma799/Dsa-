#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void Bubble(int arr[], int n){
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<n-1-i; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};

int main() {
    Solution obj;
    int arr[] = {5,3,2,5,2,5,1,4,6,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    obj.Bubble(arr,n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}