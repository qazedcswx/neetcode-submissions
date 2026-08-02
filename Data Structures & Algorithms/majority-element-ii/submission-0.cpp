class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res ;
        unordered_map<int , int> Elements_Count ;
        int n = nums.size() ;

        for(int i : nums){
        ++Elements_Count[i] ; 
        }

        for(const auto& pair : Elements_Count){   
            if(pair.second > n/3){
                res.push_back(pair.first) ;
            }
        }

        return res ;
    }
};