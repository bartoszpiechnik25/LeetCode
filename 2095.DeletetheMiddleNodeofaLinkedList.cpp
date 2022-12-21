class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if ( !head->next ) return nullptr;
        ListNode* slow = head, *fast = head, *previous;
        while ( fast && fast->next ) {
            previous = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        previous->next = slow->next;
        return head;
    }
};
