// Print an array in reverse order.

#include<iostream>
#include<bits/stdc++.h>

std::vector<int> reverse_array(const std::vector<int>& nums) {
    std::vector<int> rev;
    for(int i=nums.size()-1;i>=0;i--){
        rev.push_back(nums[i]);
    }
    return rev;
}

int main() {
    int n;
    std::cin>>n;
    std::vector<int>ans(n);
    for(int i=0;i<ans.size();i++) {
        std::cin>>ans[i];
    }
    std::vector<int> invoke = reverse_array(ans);
    for(int i=0;i<invoke.size();i++) {
        std::cout<<invoke[i]<< " ";
    }
    return 0;
}

