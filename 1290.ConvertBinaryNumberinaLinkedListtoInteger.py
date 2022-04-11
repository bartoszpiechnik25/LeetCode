class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        number = []
        while head:
            number.append(head.val)
            head = head.next
        number = number[::-1]
        return sum([(pow(2, i)*number[i]) for i in range(len(number))])
