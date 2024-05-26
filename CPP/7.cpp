// Check if an array contains a particular element.
#include<iostream>
#include<bits/stdc++.h>

bool is_present(std::vector<int>& nums, int search) {
    for(int i=0;i<nums.size();i++) {
        if(nums[i] == search) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    int search;
    std::cin>>n;
    std::vector<int>ans(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> ans[i];
    }
    std::cin>>search;
    bool check = is_present(ans, search);
    if (check) {
        std::cout<<"True" << std::endl;
    }
    else {
        std::cout<<"False" << std::endl;
    }
    return 0;
}