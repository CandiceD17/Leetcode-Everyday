class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==0)
            return {{}};
        int num = 1;
        vector<int> temp(n,0);
        vector<vector<int>> matrix(n,temp);
        int left = 0;
        int up = 0;
        int right = n;
        int down = n;
        bool reverse = false;
        int i = 0; int j = 0;
        while(left<right && up<down){
            if(!reverse){
                for(; j<right; j++){
                    matrix[i][j]=num;
                    num++;
                }
                right--;
                i++; j--;
                for(;i<down;i++){
                    matrix[i][j]=num;
                    num++;
                }
                down--;
                j--; i--;
                reverse = true;}
            else{
                for(;j>=left;j--){
                    matrix[i][j]=num;
                    num++;
                }
                left++;
                i--; j++;
                up++;
                for(;i>=up;i--){
                    matrix[i][j]=num;
                    num++;
                }
                j++; i++;
                reverse = false;}
        }
        return matrix;
    
    2019.07.30
