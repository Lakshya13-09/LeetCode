class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        vector<vector<string>>ans;
        for(auto v : strs){
            string temp = v;
            sort(temp.begin(),temp.end());
            map[temp].push_back(v);
        }
        for(auto it : map){
            ans.push_back(it.second);
        }
        return ans;
    }
};