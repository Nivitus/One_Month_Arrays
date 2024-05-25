// Print all negative elements in an array.

#include <iostream>
#include <bits/stdc++.h>

std::vector<int>negative_num(const std::vector<int>& nums) {
    std::vector<int> ans;
    for(int i=0;i<nums.size();i++) {
        if(nums[i] < 0) {
            ans.push_back(nums[i]);
        }
    }
    return ans;
} 

int main() {
    int n;
    std::cin>>n;
    std::vector<int>ans(n);
    for(int i=0;i<ans.size();i++) {
        std::cin>>ans[i];
    }
    std::vector<int>invoke = negative_num(ans);
    for(int i=0;i<invoke.size();i++) {
        std::cout<<invoke[i] << " " << std::endl;
    }
    return 0;
}