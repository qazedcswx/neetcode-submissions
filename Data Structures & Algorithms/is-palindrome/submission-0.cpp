class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0 ;
        int right = s.size() - 1 ;
        bool aws = false ;
        while(left < right){
            if(!isalnum(s[left])) {
                ++left ;
                continue ;
            }
            if(!isalnum(s[right])) {
                --right ;
                continue ;
            }
            if(s[left] == s[right]) {
                ++left ;
                --right ;
                continue ;
            }
            if(tolower(s[left]) == tolower(s[right])) {
                ++left ;
                --right ;
                continue ;
            }
            else return false ;
        }

        return true ;
    }
};
