class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        if not root:
            return 0
        return (root.val if root.val in range(low, high+1) else 0) + self.rangeSumBST(root.left,low,high) + self.rangeSumBST(root.right,low,high) 
