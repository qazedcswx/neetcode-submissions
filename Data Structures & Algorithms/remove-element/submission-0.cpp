class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (val >= 51 ) {
            int sol_size = (int)nums.size() ;
            return sol_size ;
        }
        int k = 0 ;
        vector<int> tmp = {} ;
        for(int i : nums){
            if ( i == val ) continue ;
            else {
                ++k ;
                tmp.push_back(i) ;
            }
        }
        nums = tmp ;
        return k ;
    }
};