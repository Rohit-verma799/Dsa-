#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        for(int i=0;i<row; i++){
            for(int j=0; j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i<row; i++){
            for(int j = 0; j<row/2; j++){
                swap(matrix[i][j], matrix[i][row-1-j]);
            }
        }
    }
};


int main() {
    Solution s;
    vector<vector<int>> vec = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
s.rotate(vec);
for(int i = 0; i<vec.size(); i++){
    for(int j = 0; j<vec[i].size(); j++){
        cout << vec[i][j];
    }
    cout << endl;
}
}