#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,2,1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    map<int,int> map;
    for(int i = 0; i<size; i++){
       map[arr[i]]++;
    }

    // iterate trough map and it store data in sorted order by default
    for(auto &p : map){
        cout << p.first << "->" << p.second << endl;
    }
    
    if(map.find(100) != map.end()){
        cout << "found";
    }else{
        cout << "not found";
    }
}