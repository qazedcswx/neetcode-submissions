class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        array <int , 32> bits ;
        bits.fill(0) ;

        int res = 0 ;
        for(int num : nums){
            for(int i = 0 ; i < 32 ; ++i){
                bits[i] += (num>>i) & 1 ; 
            }
        }

        for(int i = 0 ; i < 32 ; ++i){
            if(bits[i] > nums.size() / 2){
                res |= (1U << i) ;        
            }
        }

        return res ;
    }
};