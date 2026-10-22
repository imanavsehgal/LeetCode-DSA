class Solution {
public:
    
    struct Compare{
            bool operator()(pair<int,string> &a, pair<int,string> &b){
                if(a.first==b.first){
                    return a.second<b.second;
                }
                return a.first>b.first;
            }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        unordered_map<string,int>map;
        priority_queue<pair<int, string>,vector<pair<int, string>>,Compare> pq;

        for(string  word: words){
            map[word]++;
        }

        for(auto &it: map){
            pq.push({it.second,it.first});

            if(pq.size()>k){
                pq.pop();
            }
        }

        vector<string> ans;
    
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};