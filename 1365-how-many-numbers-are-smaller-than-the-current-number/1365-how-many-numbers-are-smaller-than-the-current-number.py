class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        allNums = [0] * 101

        res = [0] * len(nums)

        for v in nums:
            allNums[v] += 1

        for v in xrange(1, 101):
            allNums[v] += allNums[v - 1]

        for i in xrange(len(nums)):
            v = nums[i]
            if v == 0:
                res[i] = 0
            else:
                res[i] = allNums[v - 1]
        return res