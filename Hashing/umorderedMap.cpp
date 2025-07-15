#include <bits/stdc++.h>
using namespace std;


int main() {
    unordered_map<int,int> map;

    int arr[] = {1,2,3,4,5,6,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size; i++){
        map[arr[i]]++;
    }

    for(auto pair : map){
        cout<<pair.first<<"->"<<pair.second<<endl;
    }
    
}