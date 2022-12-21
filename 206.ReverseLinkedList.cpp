class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if ( !head ) return nullptr;
        ListNode* previous = nullptr, *next = head, *current = head;
        while ( current ) {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }
};
