class Solution {
public:
    int reverse(int x) {
        int max = 2147483647;
        int min = -2147483648;

        int reversed = 0;

        while(x != 0){
            int digit = x % 10; // get last digit 
            x /= 10; // removes last digit from x 

            if(reversed > max/10 || (reversed == max / 10 && digit > 7)) // checks if reversed is over max or under min after updated
                return 0;
            if(reversed < min / 10 || (reversed == min / 10 && digit < -8))
                return 0;

            reversed = reversed * 10 + digit; // update reverse

            
        }       
        return reversed;
    }
};
