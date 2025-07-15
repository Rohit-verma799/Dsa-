#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
       if(arr[i] > max){
        max = arr[i];
       }
    }

    int hash[max+1]  = {0};

    for(int i = 0; i<n; i++){
        hash[arr[i]]++;
    }

    do{
        int m;
        cin >> m;
        cout << hash[m];
    }while(1);
}