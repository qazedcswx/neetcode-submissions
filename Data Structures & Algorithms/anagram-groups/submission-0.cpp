#include <iostream>

#include <vector>

#include <array>

using namespace std ;



class Solution {

public:

    vector<int> twoSum(vector<int>& nums, int target) {

        array<int,1000> board ;

        board.fill(-1) ;

        for(int i = 0 ; i < nums.size() ; ++i ){

            board[nums[i]] = i ;

        }



        for(int i = 0 ; i < nums.size() ; ++i){

            if( board[target - nums[i]] != -1 && board[target - nums[i]] != i){

                vector<int> sol_twoSum{i , board[target - nums[i]]} ;

                return sol_twoSum ;

            }

        }

    }

};