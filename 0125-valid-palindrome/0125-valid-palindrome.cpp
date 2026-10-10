class Solution {
    bool valid(char ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
    return 1;
    }else{
        return 0;
    }
}
    char makinlowercase(char ch){
        if((ch>='a' && ch<='z')||(ch>=0 && ch<=9)){
            return ch;
        }else{
            char temp=ch - 'A' + 'a';
            return temp;
        }

    }
    bool validpalindrome(string m){
        int a=0,b=m.length()-1;
        string temp=m;
        while(a<b){
            swap(temp[a++],temp[b--]);
        }

        if(temp==m){
            return 1;
        }else{
            return 0;
        }
    }

public:
    bool isPalindrome(string s) {
        int i;
        int j=s.length();
        string temp="";
// removes not required elements
        for(i=0;i<j;i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

    // making lower case
    for(i=0;i<temp.length();i++){
        temp[i]=makinlowercase(temp[i]);
    }
    if(validpalindrome(temp)){
        return 1;
    }else{
        return 0;
    }

    }    
};