    }

    int mergesort(vector<int> &nums){
        return divide(nums,0,nums.size()-1);

    }
};

    int main()
    {
        Solution s;
        vector<int> v = {2, 4, 1, 3, 5};
        cout << s.mergesort(v);
    }