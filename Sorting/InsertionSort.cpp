#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    void InsertionSort(int arr[] , int n ){
        for(int i = 1; i<n; i++){
            int j = i;
            while(j >0 && arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
                j--;
            }

        }
    }
};

int main(){

    Solution s;
    int arr[] = {4,5,2,5,6,7,81,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    s.InsertionSort(arr,n);

    for(int x : arr){
        cout << x << " ";
    }


}