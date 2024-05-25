import os
from typing import List

# def reverse_array(nums):
#     ans = []
#     for i in range(len(nums)-1, -1, -1):
#         ans.append(nums[i])
#     return ans

def reverse_array(nums):
    left = 0
    right = len(nums)-1

    while left < right:
        nums[left], nums[right] = nums[right], nums[left]
        left += 1
        right -= 1

    return nums

nums = list(map(int, input().split()))
invoke = reverse_array(nums)
print(invoke)
