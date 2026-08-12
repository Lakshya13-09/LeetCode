class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    void solve(int idx, vector<int>& candi, int target){
        if(target == 0){
            ans.push_back(path);
            return;
        }
        for(int i = idx; i < candi.size(); i++){
            if(i > idx && candi[i] == candi[i - 1]){
                continue;
            }
            if(candi[i] > target){
                break;
            }
            path.push_back(candi[i]);
            solve(i + 1, candi, target-candi[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candi, int target) {
        sort(candi.begin(), candi.end());
        solve(0, candi, target);
        return ans;
    }
};