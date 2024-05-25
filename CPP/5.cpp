// Remove duplicates from a sorted array.
#include <iostream>
#include <bits/stdc++.h>

std::vector<int> RemoveElement(std::vector<int>& nums) {
    std::vector<int>ans;
    ans.push_back(nums[0]);
    for(int i=1;i<nums.size();i++) {
        if(nums[i] != nums[i-1]) {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main() {
    int n;
    std::cin>>n;
    std::vector<int>ans (n);
    for(int i=0;i<ans.size();i++) {
        std::cin>>ans[i];
    }
    std::vector<int>result = RemoveElement(ans);
    for(auto res:result) {
        std::cout<<res <<" ";
    }
    return 0;
}
