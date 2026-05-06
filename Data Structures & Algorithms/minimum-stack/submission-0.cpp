class MinStack {
private:
    stack<int> all_stack ;
    stack<int> min_stack ;

public:
    MinStack() {
            all_stack = {} ;
            min_stack = {} ;
        }
    
    
    void push(int val) {
        all_stack.push(val) ;
        if(min_stack.empty()) min_stack.push(val) ;
        else{
            if(min_stack.top() >= val ){
                min_stack.push(val) ;
            } 
        }

    }
    
    void pop() {
        if(all_stack.top()==min_stack.top()) min_stack.pop() ;

        all_stack.pop() ;   
    }
    
    int top() {
        return all_stack.top() ;
    }
    
    int getMin() {
        return min_stack.top() ;
    }
};
