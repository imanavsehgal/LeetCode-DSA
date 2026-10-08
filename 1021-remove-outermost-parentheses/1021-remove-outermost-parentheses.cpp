class Solution {
public:
    string removeOuterParentheses(string s) {
        string st="";
        int count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                if(count>1) 
                st+=s[i];
            }else{
                count--;
                if(count>0)
                st+=s[i];
            }
        }

        return st;
    }
};