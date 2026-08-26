class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i : nums){
            freq[i]++;
        }
        priority_queue<pair<int,int>>maxHeap;

        for(auto& pair : freq){
            int num = pair.first;
            int count = pair.second;
            maxHeap.push({count,num});
        }
        vector<int> value;
       while(!maxHeap.empty()){
           value.push_back({maxHeap.top().second});
           maxHeap.pop();
           if(value.size()==k){
            return value;
           }
        }
        return value;
    }
};