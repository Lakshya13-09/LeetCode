class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr_gas = 0;
        int tgas = 0;
        int tcost = 0;
        int starting = 0;
        int n = gas.size();
        for(int i = 0; i < n; i++){
            tgas += gas[i];
            tcost += cost[i];
            curr_gas +=(gas[i] - cost[i]);
            if(curr_gas<0){
                starting = i + 1;
                curr_gas = 0;
            }
        }
        return tcost>tgas?-1:starting;
    }
};