class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        if(size==0)
            return 0;
        vector<int> diff;
        vector<int> posi;
        for(int i=0; i<size; i++){
            int num = gas[i]-cost[i];
            diff.push_back(num);
            if(num>=0)
                posi.push_back(i);
        }
        if(posi.empty())
            return -1;
        for(int i=0; i<posi.size(); i++){
            int sum = 0;
            for(int j = posi[i], count = 0; count<size; j++, count++){
                sum+=diff[j%size];
                if(sum<0)
                    break;
                if(count == size-1)
                    return posi[i];
            }
        }
        return -1;
    }
};

However, there is an easier way with O(n):
use total_tank to record whether we can finish the path;
use cur_tank to record whether we are at the right starting position;

class Solution {
  public:
  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();

    int total_tank = 0;
    int curr_tank = 0;
    int starting_station = 0;
    for (int i = 0; i < n; ++i) {
      total_tank += gas[i] - cost[i];
      curr_tank += gas[i] - cost[i];
      // If one couldn't get here,
      if (curr_tank < 0) {
        // Pick up the next station as the starting one.
        starting_station = i + 1;
        // Start with an empty tank.
        curr_tank = 0;
      }
    }
    return total_tank >= 0 ? starting_station : -1;
  }
};

Author：LeetCode

2019.08.14
