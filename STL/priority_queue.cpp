#include<bits/stdc++.h>

using namespace std ;

int main(){
    priority_queue<int> pq;

    pq.push(10);
    pq.push(2);
    pq.push(1);
    pq.push(98);

    cout << pq.top() << endl;
    
    pq.pop();
    
    cout << pq.top() << endl;

    // to point top to minimun

    priority_queue<int , vector<int> ,greater<int>> p;
    p.push(10);
    p.push(2);
    p.push(1);
    p.push(98);

    cout << p.top();

}