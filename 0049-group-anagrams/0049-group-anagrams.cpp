class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        string temp="";
        for(int i=0;i<strs.size();i++){
           temp = strs[i];
           sort(temp.begin(),temp.end());
           map[temp].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for( auto &it:map){
            ans.push_back(it.second);
        }

        return ans;
    }
};