class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        int i=0,length = 0;
        for(i=n;i>=0;i--){
            if(s[i]==' '){
                continue;
            }else{
                break;
            }
        }
        for(int j=i;j>=0;j--){
            if(s[j]!=' '){
                length++;
            }else{
                break;
            }
        }

        return length;
    }
};