// https://leetcode.cn/problems/nge-tou-zi-de-dian-shu-lcof/
class Solution {
public:
    vector<double> dicesProbability(int n) {
        vector<double> res(6 * n + 1, ((double)1) / 6);
        res[0] = 0;
        for (int round = 2; round <= n; round++){
            vector<double> temp(6 * n + 1, 0);
            for (int i = 1; i <= 6 * round; i++){
                for (int j = 1; j <= 6; j++){
                    if (i - j < 1 || i - j > 6 * (round - 1))
                        continue;
                    temp[i] += (((double)1) / 6) * res[i - j];
                }
            }
            for (int i = 1; i <= 6 * round; i++){
                res[i] = temp[i];
            }
        }
        vector<double> prob;
        for (int i = 0; i < res.size(); i++){
            if (res[i] > 0)
                prob.push_back(res[i]);
        }
        return prob;
    }
};
// 2023.06.21
