class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin() , nums.end()) ;
        unordered_set<int> already_done ;
        already_done.reserve(1300) ;    //load factor 고려해서 1300 예약 

        int longest = 0 ;
        for(int num : nums){
            if(already_done.contains(num)) continue ; 
    
            int length = 1 ;
            int iter = num ;
            already_done.insert(iter) ;

            if(num_set.contains(--iter)){
                ++length ;
                already_done.insert(iter) ;
                while(num_set.contains(--iter)) {
                    ++length ;
                    already_done.insert(iter) ;
                }
            }

            iter = num ;
            if(num_set.contains(++iter)){
                ++length ;
                already_done.insert(iter) ;
                while(num_set.contains(++iter)) {
                    already_done.insert(iter) ;
                    ++length ;
                }
            }

            longest = max(length , longest) ;
        }

        return longest ;
    }
};
