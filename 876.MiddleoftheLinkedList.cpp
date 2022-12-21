class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0, counter;
        ListNode* tmp = head, *node = head;
        while ( tmp->next ) {
            len++;
            tmp = tmp->next;
        }
        if ( len % 2 == 0 ) {
            counter = 1;
        } else counter = 0;
        len = (len / 2) + 1;
        while( counter < len ) {
            node = node->next;
            counter++;
        }
        return node;
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head, *fast = head;
        while ( fast && fast->next ) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
