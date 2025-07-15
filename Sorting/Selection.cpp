#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void Selection(int arr[], int n){
        for(int i = 0; i<n-1; i++){
            int min = i;
            for(int j = i+1; j<n; j++){
                if(arr[j] < arr[min]){
                   min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp; 
        }
    }
};

int main() {
    Solution obj;
    int arr[] = {4,3,2,5,6,1,5,6,7,9,1,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    obj.Selection(arr,n);
   
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}