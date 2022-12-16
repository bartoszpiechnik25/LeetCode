struct Node {
    int val;
    Node* next;
    Node(int x): val(x), next(nullptr) {}
};

class MyQueue {
public:
    Node* head = nullptr;

    void push(int x) {
        
        Node* node = new Node(x);

        if ( !head )
            head = node;
        else {
            Node* tmp = head;
            while ( tmp->next )
                tmp = tmp->next;
            tmp->next = node;
        }
    }

    int pop() {
        int val = head->val;
        head = head->next;
        return val;
    }
    
    int peek() { return head->val; }
    
    bool empty() { return true ? !head: false; }
};
