#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int ,int> p = {1,2};

    cout << p.first << " " << p.second;

    pair<int , pair<int , pair<int,int>>> p1 = {1,{2,{3,4}}};

    cout << " " << p1.second.second.second << endl;

    pair<int ,int> arr[] = {{1,2},{3,4},{5,6}};

    cout << arr[2].first;
}