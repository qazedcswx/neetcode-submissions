class MyHashSet {
private:
    array <bool , 1000001> hash_set ;
public:
    MyHashSet() {
        hash_set.fill(false) ;
    }
    
    void add(int key) {
        hash_set[key] = true ;
    }
    
    void remove(int key) {
        hash_set[key] = false ;
    }
    
    bool contains(int key) {
        if(hash_set[key] == true) return true ;
        else return false ;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */