class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        stack = []
        while head:
            stack.append(head.val)
            head = head.next
        n = len(stack)
        return max([stack[i] + stack[n-1-i] for i in range(n // 2)])
