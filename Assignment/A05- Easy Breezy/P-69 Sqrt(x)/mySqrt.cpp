class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) // edge cases for 0 and 1 
        return x; 

        long long i = 1; // 1 testcase that couldnt be handled by ints
        while(i * i <= x)
            i++;
        
        return i - 1;
    }
};
