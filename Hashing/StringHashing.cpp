#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1..
    // string s;
    // cin >> s;
    // int hash[26] = {0};
    // for(int i = 0; i<s.length(); i++){
    //     hash[s[i]-'a']++;
    // }

    // do{
    //     char s;
    //     cin >> s;
    //     cout << hash[s-'a'];
    // }while(1);
    // 2 
    string s;
    cin >> s;
    int hash[256] = {0};
    for(int i = 0; i<s.length(); i++){
        hash[s[i]]++;
    }

    do{
        char s;
        cin >> s;
        cout << hash[s];
    }while(1);

}