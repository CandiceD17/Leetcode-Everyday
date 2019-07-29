class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int size = intervals.size();
        if(size==0 || size==1)
            return intervals;
        sort(intervals.begin(),intervals.end());
        int i=0;
        vector<vector<int>> result;
        vector<int> temp = intervals[0];
        for(int i=1; i<size; i++){
            if(temp[1]>=intervals[i][0])
                temp[1] = max(intervals[i][1], temp[1]);
            else{
                result.push_back(temp);
                temp = intervals[i];
            }
        }
        result.push_back(temp);
        return result;
    }
};

2019.07.29
