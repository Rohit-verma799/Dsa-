#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution{
    public:
    vector<int> Prevgreaterele(vector<int> nums, int n){
        vector<int> v(n,-1);
        stack<int> st;
        for(int i = 0; i<nums.size(); i++){
            while(!st.empty() && st.top() > nums[i]){
                st.pop();
            }
            if(st.empty()){
                v[i] = -1;
            }else{
                v[i] = st.top();
            }

            st.push(nums[i]);
        }

        return  v;
    }
};

int main(){
    Solution s;
    vector<int> data = {5,4,3,2,1};
    int size = data.size();
    vector<int> result = s.Prevgreaterele(data,size);
    for(int x : result){
        cout << x << " ";
    }
}
