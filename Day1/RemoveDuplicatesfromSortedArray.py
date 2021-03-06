'''  Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
'''
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)-1
        while(n>0):
            if(nums[n] == nums[n-1]):
                nums.remove(nums[n])
                n= n-1
            else:
                n = n-1
