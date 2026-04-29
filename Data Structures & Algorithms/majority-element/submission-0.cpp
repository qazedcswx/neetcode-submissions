class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> freq_nums ; 
        int check_size = nums.size() / 2 ;

        for(int num : nums){
            ++freq_nums[num] ;
        }

        for(const auto pair : freq_nums){
            if(pair.second > check_size){
                return pair.first ;
            }
        }

        return 0 ; //
    }
};