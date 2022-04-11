class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        new = ans = ListNode()
        value = 0
        while head:
            if head.val != 0:
                value += head.val
            else:
                new.next = ListNode(value)
                value = 0
                new = new.next
            head = head.next
        ans = ans.next
        return ans.next
