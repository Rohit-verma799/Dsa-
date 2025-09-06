#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> spiralOrder(vector<vector<int>> &mat){
    int left = 0, top = 0;
    int right = mat[0].size()-1;
    vector<int> v;
    int bottom = mat.size()-1;
    while(left <= right && top <= bottom){
        for(int i = left; i<=right; i++){
            v.push_back(mat[top][i]);
        }
        top++;
        for(int i = top; i<= bottom; i++){
            v.push_back(mat[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right; i>=left; i--){
                v.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i>=top; i--){
                v.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return v;
  }  

};

int main() {
    Solution s;
   vector<vector<int>> vec = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
   };
    vector<int> v =  s.spiralOrder(vec);
    for(int x : v){
        cout << x << " ";
    }
    
}