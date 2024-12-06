class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.empty()) // checks if vector doesnt have anything in it or has 
        return false;

        if(nums[0] == 0 && nums.empty())
        return true;

        int maxJump, i  = 0;

        while(i < nums.size()){
            if(i > maxJump)     // checks if maxJump could reach the index
            return false;       // ie in ex 2 if i = 4 max jump = 3 

            if(maxJump < i + nums[i])   // updates max jump
                maxJump = i + nums[i];

            if( maxJump >= nums.size() - 1) //  checks if maxJump reaches the end or over and returns true if it is 
            return true;

            i++;
        }
        return false;
    }    
};
