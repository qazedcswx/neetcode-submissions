class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alph_s(26 , 0) ;
        vector<int> alph_t(26 , 0) ;
        for(char c : s){
            int i_c = c - 'a' ;
            ++alph_s[i_c] ;
        }

        for(char c : t){
            int i_c = c - 'a' ;
            ++alph_t[i_c] ;
        }

        if(alph_s == alph_t){
            return true ;
        }
        else return false ;
    }
};
