The solution is to create a vector to represent separate rows in this conversion.
We add letters to rows one by one, then combine each rows in order.

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        int length = s.size();
        int size = min(numRows, length);
        vector<string> row (size);
        int cur = 0;
        bool down = true;
        for(int i=0; i<length; i++){
            row[cur] += s[i];
            if(down)
                cur++;
            else
                cur--;
            if(cur==size-1)
                down = false;
            if(cur==0)
                down = true;
        }
        string result = "";
        for(int i=0; i<size; i++)
            result+=row[i];
        return result;
    }
};

2019.07.17
