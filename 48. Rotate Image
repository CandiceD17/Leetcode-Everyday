class Solution {
public:
    void reverse(vector<int>& row){
        int size = row.size();
        int front=0;
        int back = size-1;
        int temp;
        while(front<back){
            temp = row[front];
            row[front] = row[back];
            row[back] = temp;
            front++;
            back--;
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        if(size==0)
            return;
        //first reverse each row
        for(int i=0; i<size; i++)
            reverse(matrix[i]);
        int count = size-1;
        //then swap(i,j) with (n-1-j, n-1-i)
        for(int i=0; i<size; i++){
            for(int j=0; j<count; j++)
                swap(matrix[i][j],matrix[size-1-j][size-1-i]);
            count--;
        }
    }
};
