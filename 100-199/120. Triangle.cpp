class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        if(size==0)
            return 0;
        for(int i=1; i<size; i++){
            int bound = triangle[i-1].size();
            for(int j=0; j<=bound; j++){
                if(j-1>=0 && j<bound)
                    triangle[i][j]+=min(triangle[i-1][j], triangle[i-1][j-1]);
                else if(j==bound)
                    triangle[i][j]+=triangle[i-1][j-1];
                else
                    triangle[i][j]+=triangle[i-1][j];
            }
        }
        int min = INT_MAX;
        for(int i=0; i<triangle[size-1].size(); i++){
            if(triangle[size-1][i]<min)
                min = triangle[size-1][i];
        }
        return min;
    }
};

2019.08.12
