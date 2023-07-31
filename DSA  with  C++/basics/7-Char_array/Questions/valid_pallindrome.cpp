//link----    https://leetcode.com/problems/valid-palindrome/submissions/

class Solution {
private:
    bool isvalid(char c){
        if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    char lower(char c){
        if (c>='A' && c<='Z'){
            int t=c-'A'+'a';
            return t;
        }
        else{
            return c;
        }
    }
    bool palindrome(string str){
        int s=0;
        int e=str.length()-1;
        while(s<=e){
            if(lower(str[s])!= lower(str[e])){
                return 0;
            }
            else{
                s++;
                e--;
            }
            
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp;
        for(int j=0; j<s.length(); j++){
            if(isvalid(s[j])){
                temp.push_back(s[j]);
            }
        }
        if(palindrome(temp)){
            return 1;
        }
        return 0;
    }
};