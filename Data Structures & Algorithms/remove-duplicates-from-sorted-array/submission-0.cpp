class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return nums.size() ; 

        auto a = nums.begin() ;
        auto b = a + 1 ;

        while(b != nums.end()){
            if(*b == *a) {
                nums.erase(a) ;
                continue ;
            }
            else{
                ++b;
                ++a;
            }
        }

        return nums.size() ;
    }
};