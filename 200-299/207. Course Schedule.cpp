class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int pairs = prerequisites.size();
        if(!pairs)
            return true;
        if(!numCourses)
            return false;
        vector<int> in(numCourses,0);
        for(int i=0; i<pairs; i++)
            in[prerequisites[i][0]]++;
        queue<int> res;
        int num = 0;
        for(int i=0; i<numCourses; i++){
            if(in[i]==0)
                res.push(i);
        }
        while(!res.empty()){
            int cur = res.front();
            res.pop();
            num++;
            for(int i=0; i<pairs; i++){
                if(prerequisites[i][1]==cur){
                    in[prerequisites[i][0]]--;
                    if(in[prerequisites[i][0]]==0)
                        res.push(prerequisites[i][0]);
                }
            }
        }
        cout<<num;
        return num==numCourses;
    }
};

2019.09.02
