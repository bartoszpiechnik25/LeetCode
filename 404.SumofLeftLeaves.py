class Solution:
    def isLeaf(self, root: Optional[TreeNode]) -> bool:
        if root is None: return False
        if (root.left is None) and (root.right is None): return True
        return False
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        ans = 0
        if root:
            if self.isLeaf(root.left):
               ans += root.left.val
            else:
                ans += self.sumOfLeftLeaves(root.left)
            ans += self.sumOfLeftLeaves(root.right)
        return ans
