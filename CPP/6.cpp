// Find the missing number in an array.

#include <iostream>
#include <bits/stdc++.h>

int FindMissing_Number(std::vector<int>& nums) {
    int n = nums.size();
    int exp_sum = (n * (n + 1)) / 2;
    int act_sum = 0;
    for(int i=0;i<nums.size();i++) {
        act_sum += nums[i];
    }
    return exp_sum - act_sum;
}

int main() {
    int n;
    std::cin>>n;
    std::vector<int>ans(n);
    for(int i=0;i<ans.size();i++) {
        std::cin>>ans[i];
    }
    int invoke = FindMissing_Number(ans);
    std::cout<<invoke<<std::endl;
    return 0;
}