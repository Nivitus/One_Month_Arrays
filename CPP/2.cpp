// Find the maximum and minimum elements in an array.

#include <iostream>
#include <bits/stdc++.h>

int largest(std::vector<int>& nums) {
    int largest = INT_MIN;
    std::vector<int>ans;
    for(int i=0;i<nums.size();i++) {
        if(nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}

int smallest(std::vector<int>& nums) {
    int smallest = INT_MAX;
    std::vector<int>ans;
    for(int i=0;i<nums.size();i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    return smallest;
}

int main() {
    int n;
    std::cin>>n;
    std::vector<int>ans(n);
    for(int i=0;i<ans.size();i++) {
        std::cin>>ans[i];
    }
    int small_invoke = smallest(ans);
    int large_invoke = largest(ans);
    std::cout << "Largest: " << large_invoke << " " << "Smallest: " << small_invoke << std::endl;
    return 0;
}