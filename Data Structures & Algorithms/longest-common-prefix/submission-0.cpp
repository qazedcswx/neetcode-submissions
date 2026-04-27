class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string empty_string ;
        if (strs.size() == 0) {
            return empty_string ;
        }
        if(strs.size() == 1) {
            string first_string = strs[0] ;
            return first_string ;
        }

        string temp1 = strs[0] ;
        string temp2 = strs[1] ;
        string equal_string ;

        for(int i = 0 ; i < temp1.size() ; ++i){
            if(temp1[i] == temp2[i]){
                equal_string += temp1[i] ;
            }
            else break ;
        }
        if (equal_string.empty()) return empty_string ;

        for(int i = 2 ; i < strs.size() ; ++i){
            if(equal_string.empty()) return empty_string ; 

            string tmp = strs[i] ;
            for(int j = 0 ; j < equal_string.size() ; ++j){
                if(equal_string[j] != tmp[j]){
                    equal_string.erase(j) ; 
                    break ;
                }
            }
        }
        return equal_string ;

    }
};