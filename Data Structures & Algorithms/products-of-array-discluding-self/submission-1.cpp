class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long tot = 1 ;
        pair <int , int> zero = { 0 , 0 } ;
        for( int i = 0 ; i < nums.size() ; ++i ){
            if(nums[i] == 0) {
                ++zero.first ;
                zero.second = i ;
                continue ;
            }
            tot *= nums[i] ;
        }
    //O(n)
        
        vector<int> output (nums.size() , 0) ;
        if( zero.first >= 2 ) return output ;
        if( zero.first == 1 ) {
            output[zero.second] = tot ;
            return output ;
        }
        for( int i = 0 ; i < nums.size() ; ++i ){
            output[i] = tot / nums[i] ;
        }
        return output ;
    }
};
