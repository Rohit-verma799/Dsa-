#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        int l = n-1;
        int f = 0;
        while(f < l){
            int temp = arr[l];
            arr[l] = arr[f];
            arr[f] = temp;
            f++;
            l--;
        }
    }
    void RecursiveReverse(int arr[], int start, int end){
        if(start < end){
            swap(arr[start] , arr[end]);
            RecursiveReverse(arr,start+1,end-1);
        }
    }
};

int main(){
    Solution s;
    int arr[] = {1,2,3,4,5};
    int n = (sizeof(arr)/sizeof(arr[0]));
    // s.reverse(arr,n);
    s.RecursiveReverse(arr,0,n-1);

    for(int x : arr){
        cout << x << " ";
    }
}