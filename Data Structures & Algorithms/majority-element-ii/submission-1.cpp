class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res ;
        int n = nums.size() ;
        
        pair<int , int> candi1 = {0 , 0};
        pair<int , int> candi2 = {0 , 0};

        for(int i : nums){
            if( candi1.first == i ){
                ++candi1.second ; 
            }
            else if( candi2.first == i ){
                ++candi2.second ;
            }
            else if( candi1.second == 0 ){
                candi1.first = i ;
                ++candi1.second ;
            }         
            else if( candi2.second == 0 ){
                candi2.first = i ;
                ++candi2.second ;
            }
            else{
                --candi1.second ;
                --candi2.second ;
            }
        }

        candi1.second = 0 ;
        candi2.second = 0 ;
        
        for(int i : nums){
            if(candi1.first == i){
                candi1.second++ ;
            }
            else if(candi2.first == i){
                candi2.second++ ;
            }
        }
        if(candi1.second > n/3){
            res.push_back(candi1.first) ;
        }
        if(candi2.second > n/3){
            res.push_back(candi2.first) ;
        }
        
        return res ;
    }
};