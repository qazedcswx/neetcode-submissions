class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true ;

        stack<char> string_stack ;

        for(char i : s){
            switch( i ) {
                case '(' :{
                    string_stack.push(i) ;
                    break ;
                }
                case '{' :{
                    string_stack.push(i) ;
                    break ;
                }
                case '[' :{
                    string_stack.push(i) ;
                    break ;
                }
                case ')' :{
                    if(string_stack.empty() || string_stack.top() != '(') return false ;
                    string_stack.pop() ;
                    break ;
                }
                case '}' :{
                    if(string_stack.empty() || string_stack.top() != '{') return false ;
                    string_stack.pop() ;
                    break ;
                }
                case ']' :{
                    if(string_stack.empty() || string_stack.top() != '[') return false ;
                    string_stack.pop() ;
                    break ;
                }
            }
        }
    return string_stack.empty();
    }
};
