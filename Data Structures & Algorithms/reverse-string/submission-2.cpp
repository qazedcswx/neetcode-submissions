class Solution {
public:
    void reverseString(std::vector<char>& s) {
        if (s.empty()) return;

        auto ptr1 = s.begin();
        auto ptr2 = s.end() - 1; 

        while (ptr1 < ptr2) {
            //*ptr1 ^= *ptr2 ^= *ptr1 ^= *ptr2 ;
            swap(*ptr1 , *ptr2) ;
            
            ++ptr1;
            --ptr2;
        }
    }
};