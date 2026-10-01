class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());
        string s1 = str[0];
        string s2 = str[str.size()-1];
        string s = "";

        int i=0;
        while( i< s1.length() && i<s2.length() && s1[i] == s2[i]){
            s+=s1[i];
            i++;
        }
        return s;
    
    }
};