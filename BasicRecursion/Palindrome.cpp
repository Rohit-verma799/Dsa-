#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool palindrome(string s){
        int l = s.length()-1;
        int f = 0;
        while(f < l){
            if(s[f] != s[l]) return false;
            f++;
            l--;
        }
        return true;
    }

    bool recursivePalindrome(string s, int start, int last){
        if(start < last){
            if(s[start] != s[last]) return false;
            recursivePalindrome(s, start+1, last-1);
        }
        return true;
    }
};

int main(){
    Solution s;
    string s1 = "nitn";
    int last = s1.length()-1;
    cout <<  s.recursivePalindrome("nitin",0,last);

}