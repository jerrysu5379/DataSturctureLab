def thirdMax(nums):
    nums = list(set(nums))
    if len(nums) < 3:
        return max(nums)
    nums.sort()
    return nums[-3]
nums = [int(n) for n in input().split()]
print(thirdMax(nums))