#include<bits/stdc++.h>
using namespace std;

int main(){
    // creating a vector
    vector<int> v;

    // inserting elmement 
    v.push_back(10);
    v.emplace_back(20);

    // creating and inserting fix value 

    vector<int> v1(5,10);

    // copy vector

    vector<int> v2(v1);

    // iterator

    vector<int> :: iterator it = v1.begin();
    cout << *it;

    // using loops 

    

    for(vector<int> :: iterator it = v1.begin(); it != v1.end(); it++){
        cout << *it << endl;
    }

    // auto keyword
     // end always return the address of right after like {1,3,4,5,5 <points here>}
     vector<int> ::  iterator i = v1.end();
    i--;
    cout << *i;

    // for each

    for(auto x : v){
        cout << x << " ";
    }

    v1.erase(v1.begin()); // one value

    v2.erase(v1.begin()+1 , v1.begin()+3); // [start , end)

    v1.insert(v1.begin(), 456);


    int a = v2.back();
    int b = v2.front();

    cout << a << " " << b;
    

    v1.pop_back();

}   