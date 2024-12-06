class Solution {
public:
    int subtractProductAndSum(int n) {
        if (n == 0 || n == 1)
        return 0;

        int sum = 0;
        int product = 1;

         // checks if even 
        while(n != 0){
            int temp = n % 10; // gets last digit 
            sum += temp; // gets last digit and puts it to sum
            product *= temp; // gets last digit and puts it to product
            n /=  10; // removes last digit 
        }

        return product - sum;
    }    
        
    
};
