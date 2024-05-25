import os

def FindNegative(nums):
    negative = []
    for i in range(0, len(nums)):
        if nums[i] < 0:
            negative.append(nums[i])
    return negative

nums = list(map(int, input().split()))
invoke = FindNegative(nums)
print("Negative Numbers: ", invoke)


