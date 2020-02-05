// Below is the interface for Iterator, which is already defined for you.
// **DO NOT** modify the interface for Iterator.

class Iterator {
    struct Data;
	Data* data;
public:
	Iterator(const vector<int>& nums);
	Iterator(const Iterator& iter);
	virtual ~Iterator();
	// Returns the next element in the iteration.
	int next();
	// Returns true if the iteration has more elements.
	bool hasNext() const;
};


class PeekingIterator : public Iterator {
public:
    int cur;
    bool end=false;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
        if(Iterator::hasNext())
            cur = Iterator::next();
        else
            end = true;
	    
	}

    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return cur;
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    if(end)
            return -1;
        int res = cur;
        if(Iterator::hasNext()){
            cur = Iterator::next();
            return res;
        }
        else{
            end = true;
            return res;
        }
	}

	bool hasNext() const {
	    return !end;
	}
};
