class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> ops_stack;

        for(const string& op : operations) {
            if(op == "D") {
                ops_stack.push(ops_stack.top() * 2);
            } 
            else if(op == "+") {
                int tmp = ops_stack.top();
                ops_stack.pop(); 
                int tmp_p = ops_stack.top() + tmp;
                ops_stack.push(tmp);
                ops_stack.push(tmp_p);
            } 
            else if(op == "C") {
                ops_stack.pop();
            } 
            else {
                ops_stack.push(std::stoi(op));
            } 
        }

        int tot = 0; 
        while(!ops_stack.empty()) {
            tot += ops_stack.top();
            ops_stack.pop();   
        }

        return tot;
    }
};