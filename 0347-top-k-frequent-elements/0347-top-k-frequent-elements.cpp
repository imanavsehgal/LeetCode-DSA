class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1 && k==1)
        return nums;
        unordered_map<int,int> map;

        for(int num: nums){
            map[num]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

        for(auto &it: map){
            pq.push({it.second,it.first});

            if(pq.size() > k){
                pq.pop();
            }
        }
            vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};