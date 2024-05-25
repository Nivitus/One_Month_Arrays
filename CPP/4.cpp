// Find the second largest element in an array.
#include<iostream>
#include<bits/stdc++.h>

int SecondLargest(std::vector<int>& nums) {
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for(int i=0;i<nums.size();i++) {
        if(nums[i] > largest) {
            second_largest = largest;
            largest = nums[i];
        }
        else if(nums[i] > second_largest && nums[i] != largest) {
            second_largest = nums[i];
        }
    }
    return second_largest;
}

int SecondSmallest(std::vector<int>& nums) {
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for(int i=0;i<nums.size();i++) {
        if(nums[i] < smallest) {
            second_smallest = smallest;
            smallest = nums[i];
        }
        else if(nums[i] < second_smallest && nums[i] != smallest) {
            second_smallest = nums[i];

        }
    }
    return second_smallest;
}

int main() {
    int n;
    std::cin>>n;
    std::vector<int>ans(n);
    for (int i = 0; i < n; i++) {
        std::cin >> ans[i];
    }
    int invoke = SecondLargest(ans);
    int small_invoke = SecondSmallest(ans);
    std::cout<<"Second Largest: "<<invoke<<" " << "Second Smallest: "<< small_invoke <<std::endl;
    return 0;
}