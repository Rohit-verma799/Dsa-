#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    
    l.push_back(10);
    l.push_front(23);
    l.pop_front();
    
    // other fucntion is same as vector
    
    l.insert(next(l.begin(),1),5);
    for(int x : l){
        cout << x << endl;
    }
}