#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    void Merge(int arr[], int low ,int mid, int high){
        vector<int> temp;
        int i = low;
        int j = mid+1;
        while(i <= mid && j <= high){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j <= high){
            temp.push_back(arr[j]);
            j++;
        }

        for(int i = low; i<=high; i++){
            arr[i] = temp[i-low];
        }
    }
    void Divide(int arr[], int low , int high){
        if(low == high){
            return;
        }
        int mid = (low+high)/2;
        Divide(arr, low,  mid);
        Divide(arr, mid+1, high);
        Merge(arr,low,mid,high);

    }
    void MergeSort(int arr[] ,int low , int high){
        Divide(arr,low,high);
    }
};

int main() {
    Solution s;
    int arr[] = {5,3,2,4,5,6,3,2,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    s.MergeSort(arr,0, n-1);
    for(int x : arr){
        cout << x << " ";
    }
    
}