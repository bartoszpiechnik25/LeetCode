class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode;
        ListNode* head = sum;
        int carry = 0;
        while (l1 || l2 || carry) {
            int tmp_sum = 0;
            if (l1) {
                tmp_sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                tmp_sum += l2->val;
                l2 = l2->next;
            }
            tmp_sum += carry;
            ListNode* element = new ListNode(tmp_sum % 10);
            sum->next = element;
            carry = tmp_sum / 10;
            sum = sum->next;
        }
        return head->next;
    }
};
