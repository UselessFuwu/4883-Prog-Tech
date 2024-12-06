#include <algorithm>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) // handles if vector is empty
            return 0;

        sort(nums.begin(), nums.end());

        if (nums.front() == 0 &&
            nums.back() == 0) // handles if vector is filled with 0
            return 1;

        int count = 1;  // current
        int streak = 1; // longest

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } else if (nums[i] == nums[i - 1] + 1) {
                count++;
            } else {
                streak = max(streak, count);
                count = 1; // resets for next sequence
            }
        }

        streak = max(streak, count);
        return streak;
    }
};
