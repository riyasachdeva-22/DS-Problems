//Reverse the bits 
//steps:last bit by & then n>>1
//position by 31-i;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
         uint32_t r=0,p=31;
        while(n!=0)
        {
            r += (n & 1) << p;
            n=n>>1;
            p=p-1;
        }
        return r;
    }
};
