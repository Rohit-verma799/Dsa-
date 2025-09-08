#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
    int Maximum_product_subarray_1(vector<int> &nums){
        int maxProduct = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            int product = 1;
            for(int j = i; j<nums.size(); j++){
                product *= nums[j];
                maxProduct = max(maxProduct,product);
            }

        }
        return maxProduct;
    }

    int maxproduct(vector<int> &nums){
        int prefix = 1;
        int sufix = 1;
        int maxProduct = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            if(prefix == 0) prefix = 1;
            if(sufix == 0) sufix = 1;

            prefix *= nums[i];
            sufix *= nums[nums.size()-i-1];

            maxProduct = max(maxProduct, max(prefix,sufix));

        }
        return maxProduct;
    }
};

int main() {
    Solution s;
    vector<int> v = {2,3,-2,4};
    cout << s.maxproduct(v);
    
}