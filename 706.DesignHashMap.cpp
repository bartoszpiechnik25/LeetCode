static const int max_size = 1000001;

class MyHashMap {
private:
    int data[max_size];
public:
    MyHashMap() {
        for( int i = 0; i < max_size; ++i) data[i] = -1;
    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {
        return data[key];
    }
    
    void remove(int key) {
        data[key] = -1;
    }
};
