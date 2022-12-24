class CustomStack {
    int* stack;
    int index, len;
public:
    CustomStack(int maxSize) {
        stack = new int [maxSize];
        len = maxSize;
        index = -1;
    }
    
    void push(int x) {
        if ( index >= len - 1 )
            return;
        stack[++index] = x;
    }
    
    int pop() {
        if ( index == -1 )
            return index;
        return stack[index--];
    }
    
    void increment(int k, int val) {
        if ( k > (index + 1) )
            k = index + 1;
        for ( int i = 0; i < k; ++i )
            stack[i] += val;
    }
};
