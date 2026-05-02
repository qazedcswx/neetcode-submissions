class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin() , nums.end()) ;

        int longest = 0 ;
        for(int num : nums ){
            if(!nums_set.contains(num-1)){
                int length = 1 ;
                while(nums_set.contains(++num)) ++length ;
                longest = max(length , longest) ;
            }
        }

        return longest ;
    }
};
