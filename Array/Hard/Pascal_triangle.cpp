#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    // First Type print the element at certain row and column
    int ncr(int r, int c){
        int element = 1;
        for(int i = 0; i<c; i++){
           element *= (r-i);
           element /= (i+1);
        }
        return element;
    }
    int pascal_1(int r, int c){
           return ncr(r-1,c-1);
    }

    // Second Type print the whole row
    vector<int> pascal_2(int n){
        int element = 1;
        vector<int> v;
        for(int i = 0; i<=n; i++){
            v.push_back(element);
            element *= (n-i);
            element /= (i+1);
        }
        return v;
    }

    // Thrid Type print the whole triangle

    vector<vector<int>> pascal_3(int n){
        vector<vector<int>> v;
        for(int i = 0; i<n; i++){
               vector<int> temp;
               int element = 1;
            for(int j = 0; j<=i; j++){
                 temp.push_back(element);
                 element *= (i-j);
                 element /= (j+1);
            }
            v.push_back(temp);
        }
        return v;
    }
};

int main() {
    Solution s;
    // cout << s.pascal_1(6,3);
    vector<vector<int>> v = s.pascal_3(5);
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
}