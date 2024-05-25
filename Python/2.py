# Find the maximum and minimum elements in an array.

import os

def Largest_Number(nums):
    great = float('-inf')
    for i in range(0, len(nums)):
        if nums[i] >great:
            great = nums[i]

    return great

def Smallest_Number(nums):
    small = float('inf')
    for i in range(0, len(nums)):
        if nums[i] < small:
            small = nums[i]

    return small

nums = list(map(int, input().split()))
large_invoke = Largest_Number(nums)
small_invoke = Smallest_Number(nums)
print("Largest Number: ", large_invoke)
print("Smallest Number: ", small_invoke)