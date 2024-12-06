class Solution {
public:
    bool isPalindrome(string s) {
    // Initialize two pointers, one at the start and one at the end of the string
    int left = 0;
    int right = s.length() - 1;


    while (left < right) {
        // Move left pointer forward if the current character is not alphanumeric
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        // Move right pointer backward if the current character is not alphanumeric
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        // Compare the characters in lowercase
        if (tolower(s[left]) != tolower(s[right])) {
            return false; // If characters don't match, it's not a palindrome
        }
        // Move both pointers inward
        left++;
        right--;
    }

    return true; // If all characters match, it's a palindrome
    }
};
