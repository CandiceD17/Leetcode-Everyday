class LRUCache {
private:
    int capacity;
    int size=0;
    
    class Node{
    public:
        int key;
        int val;
        Node* prev;
        Node* next;
        
    };
    void addNode(Node* temp){
        temp->prev = head;
        temp->next = head->next;
        head->next->prev = temp;
        head->next = temp;
    }
    void removeNode(Node* temp){
        Node* previous = temp->prev;
        Node* nextOne = temp->next;
        previous->next = nextOne;
        nextOne->prev = previous;
    }
    void moveToHead(Node* temp){
        removeNode(temp);
        addNode(temp);
    }
    Node* popTail(){
        Node* res = tail->prev;
        removeNode(res);
        return res;
    }
    unordered_map<int, Node*> hash;
    Node* tail;
    Node* head;
    
    public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        head = new Node();
        tail = new Node();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        Node* temp = hash[key];
        if(temp==NULL)
            return -1;
        moveToHead(temp);
        return temp->val;
    }
    
    void put(int key, int value) {
        Node* temp=hash[key];
        if(temp==NULL){
            Node* newOne = new Node();
            newOne->key = key;
            newOne->val = value;
            addNode(newOne);
            hash[key] = newOne;
            size++;
            if(size>capacity){
                Node* killMe = popTail();
                hash[killMe->key] = NULL;
                size--;
            }
        }
        else{
            temp->val = value;
            moveToHead(temp);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
