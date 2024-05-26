// Rotate an array by a given number of positions

#include <iostream>
#include <bits/stdc++.h>

std::vector<int> LeftRotateArray(std::vector<int>& nums, int pos) {
    int n = nums.size();
    pos = pos % n;
    std::vector<int>left_rotate(n);
    for(int i=0;i<nums.size();i++) {
        left_rotate[i] = nums[(i + pos) % n];
    }
    return left_rotate;
}

std::vector<int> RightRotateArray(std::vector<int>& nums, int pos) {
    int n = nums.size();
    pos = pos % n;
    std::vector<int>right_rotate(n);
    for(int i=0;i<nums.size();i++) {
        right_rotate[(i + pos) % n] = nums[i];
    }
    return right_rotate;
}

int main() {
    int n, left_pos, right_pos;
    std::cin>>n;
    std::vector<int>ans(n);
    for(int i=0;i<ans.size();i++) {
        std::cin>>ans[i];
    }
    std::cin>>left_pos;
    std::cin>>right_pos;
    std::vector<int>left_result = LeftRotateArray(ans, left_pos);
    std::vector<int>right_result = RightRotateArray(ans, right_pos);

    for(auto left_res:left_result) {
        std::cout<<left_res<<" ";
    }
    std::cout<<std::endl;
    for(auto right_res:right_result) {
        std::cout<<right_res<<" ";
    }
    return 0;
}