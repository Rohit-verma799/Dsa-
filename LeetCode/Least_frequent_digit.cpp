#include<bits/stdc++.h>
using namespace std;

int least_frequent(int n){
    string s = to_string(n);
    unordered_map<char,int> map;
    for(int i = 0; i<s.size(); i++){
        map[s[i]]++;
    }
    int least = INT_MAX;
    int digit;
    for(auto &p : map){
        if(p.second < least){
            least = p.second;
            digit = p.first-'0';
        }else if(p.second == least){
            digit = min(digit, p.second-'0');
        }
    }
    
    return digit;
    
}

int main(){
    cout << least_frequent(12233);
}