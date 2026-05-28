class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 배열이 비어있으면 0을 반환
        if (nums.empty()) return 0;

        int write_idx = 1;

        for (int read_idx = 1; read_idx < nums.size(); ++read_idx) {

            if (nums[read_idx] != nums[read_idx - 1]) {
                nums[write_idx] = nums[read_idx]; 
                ++write_idx;                      
            }
        }
        return write_idx;
    }
};