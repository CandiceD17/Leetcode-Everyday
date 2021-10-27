class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {
        int size = pre.size();
        if(numCourses==0)
            return {};
        if(size==0){
            vector<int> res;
            for(int i=numCourses-1; i>=0; i--)
                res.push_back(i);
            return res;
        }
        vector<int> in(numCourses, 0);
        for(int i=0; i<size; i++)
            in[pre[i][0]]++;
        queue<int> order;
        for(int i=0; i<numCourses; i++){
            if(in[i]==0)
                order.push(i);
        }
        vector<int> res;
        while(!order.empty()){
            int num = order.front();
            order.pop();
            res.push_back(num);
            for(int i=0; i<size; i++){
                if(pre[i][1]==num){
                    in[pre[i][0]]--;
                    if(in[pre[i][0]]==0)
                        order.push(pre[i][0]);
                }
            }
        }
        if(res.size()<numCourses)
            return {};
        return res;
    }
};

2019.09.03
