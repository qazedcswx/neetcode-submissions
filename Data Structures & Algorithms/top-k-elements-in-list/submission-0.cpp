class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> nums_f ;       //frequncy , value 

        for(int um : nums){
            ++nums_f[um] ;
        }

        vector<pair<int ,int>> sorted_map ;
        for(auto jun  : nums_f){
            pair<int, int> sik = {jun.second , jun.first} ;
            sorted_map.push_back(sik) ;
        }

        sort(sorted_map.rbegin() , sorted_map.rend()) ;
        vector<int> kotae ;
        for(int sik = 0 ; sik < k ; ++sik){
            auto um = sorted_map[sik] ; 
            kotae.push_back(um.second) ;
        }

        return kotae ;
    }
};
