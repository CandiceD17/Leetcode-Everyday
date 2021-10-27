class Solution {
private:
    vector<vector<int>> res;
    int number;
public:
    void recur(vector<int> temp, int n, int index, int k){
        if(n<0 || k<0)
            return;
        if(n==0 && k==0){
            res.push_back(temp);
            return;}
        if(k==0 || n==0)
            return;
        for(int i=index; i<10; i++){
            temp.push_back(i);
            recur(temp, n-i, i+1, k-1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        number = n;
        vector<int> temp;
        recur(temp, n, 1, k);
        return res;
    }
};

2019.09.03
