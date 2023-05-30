class MyHashSet {
public:
    vector<int>temp;
    
    MyHashSet() {
        temp.resize(1e6+1,0);
    }
    
    void add(int key) {
        temp[key] = 1;
    }
    
    void remove(int key) {
        temp[key] = 0;
    }
    
    bool contains(int key) {
        return temp[key]>0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */