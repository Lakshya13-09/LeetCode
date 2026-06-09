class Solution {
public:
    vector<vector<int>> ans;
    void solve(int idx, vector<int>& candi, int target, vector<int>& temp){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        for(int i = idx; i < candi.size(); i++){
            if(candi[i] <= target){
                temp.push_back(candi[i]);
                solve(i, candi, target - candi[i], temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(0, candidates, target, temp);
        return ans;
    }
};