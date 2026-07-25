class Solution {
private:
    string encoded_string ; //null
    vector<int> numsOfEachStrs ; //null
public:

    string encode(vector<string>& strs) {
        for(auto str : strs){
            int num = 0 ;
            for(char ch : str){
                encoded_string.push_back(ch) ;
                ++num ;
            }
            numsOfEachStrs.push_back(num) ;
        }
        return encoded_string ;
    }

    vector<string> decode(string s) {
        vector<string> decodede_strs ;
        int cursor = 0 ;
        
        for( int num : numsOfEachStrs ){
            string str ; // null 

            for(int i = 0 ; i < num ; ++i){
                str.push_back(encoded_string[cursor]) ;
                ++cursor ;
            }
            decodede_strs.push_back(str) ;    
        }
        return decodede_strs ;
    }
};
