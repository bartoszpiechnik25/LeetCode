class Solution:
    def findMedianSortedArrays(self, nums1: list, nums2: list) -> float:
        length = len(nums1) + len(nums2)
        nums1.extend(nums2)
        nums1.sort()
        if length % 2 != 0:
            return float(nums1[length//2])
        else:
            index1, index2 = nums1[length//2 - 1], nums1[length//2]
            return (index1 + index2)/2
