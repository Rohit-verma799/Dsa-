#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution{
    public:
    vector<int> nextgreaterele(vector<int> vec, int n){
        vector<int> vec2;
        stack<int> st;

        for(int i = 0; i<vec.size(); i++){
            while(!st.empty() && vec[i] > st.top()){
                vec2.push_back(st.top());
                st.pop();
            }

            st.push(vec[i]);
        }
            while(!st.empty()){
                vec2.push_back(-1);
                st.pop();
            }

        return vec2;
    }
};

int main(){
    Solution s;
    vector<int> data = {1,2,3,4,5};
    int n = data.size();
    vector<int> h = s.nextgreaterele(data,n);

    for(int x : h){
        cout << x << " ";
    }
}n 