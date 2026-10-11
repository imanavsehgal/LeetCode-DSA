class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> mp;
        
      vector<int> ans;
       int n=s.length();

       int m=words.size();
       int k =  words[0].size();
    
        if(n<m*k || m==0)
        return ans;

        for(string str:words){
            mp[str]++;
        }

       for(int i=0;i<=n-m*k;i++){
            unordered_map<string,int> temp;
            for(int j=i;j<i+m*k;j+=k){
                string str=s.substr(j,k);
                
                temp[str]++;
            }
            if(temp==mp){
                ans.push_back(i);
            }
       }

       return ans;

    }
};