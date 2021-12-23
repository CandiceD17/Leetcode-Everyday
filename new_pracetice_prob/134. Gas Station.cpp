class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        int index = 0, count = 0, sum = 0, start = 0;
        while(count < size){
            sum += gas[index % size] - cost[index % size];
            if(sum < 0){
                count = 0;
                sum = 0;
                start = index + 1;
            }
            else{
                count++;
            }
            index++;
            if(start > size)
                return -1;
        }
        return start;
    }
};
