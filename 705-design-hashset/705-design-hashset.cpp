class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        vector<int> m;
        v=m;
    }
    
    void add(int key) {
        if(!contains(key))
            v.push_back(key);
    }
    
    void remove(int key) {
        if(contains(key))
        {
            v.erase(v.begin()+p);
        }
    }
    int p=0;
    bool contains(int key) {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==key)
            {
                p=i;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */