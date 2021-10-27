class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        int h = 0;
        sort(citations.begin(),citations.end());
        for(int i=size-1; i>=0; i--){
            h++;
            if(h==citations[i])
                break;
            else if(h>citations[i]){
                h--;
                break;
            }
        }
        return h;
    }
};

2019.09.29
