class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> freq;
        for(int i : arr){
            freq[i]++;
        }
        unordered_set<int> search;
        for(auto it : freq){
            if(search.count(it.second)){
                return false;
            }
            search.insert(it.second);
        }
        return true;
    }
};