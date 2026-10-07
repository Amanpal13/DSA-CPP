// Palindrome Number
// Given a non-negative integer num, your task is to determine whether this integer is a palindrome. An integer is a palindrome if it reads the same backward as forward.

// Return the string Yes if the number is a palindrome, otherwise return the string No.

// Example 1
// Input:


// 121
// Output:


// Yes
// Explanation: 121 reads the same forwards and backwards, hence it is a palindrome.

// Example 2
// Input:


// 123
// Output:


// No
// Explanation: 123 does not read the same forwards and backwards, so it is not a palindrome.

// Output Format
// Return the string Yes if num is a palindrome, otherwise return No. The expected output is the word Yes/No (capitalized) — not true/false.

// Mathematics
// String Manipulation
// Examples
// Submissions: 0
// Accepted: 0
// Acceptance Rate: 0%
// Input: num = 121

// Output: Yes

// Explanation: 121 is a palindrome.

// Input: num = 123

// Output: No

// Explanation: 123 is not a palindrome.

// Input: num = 1221

// Output: Yes

// Explanation: 1221 is a palindrome.



// code:-


class Solution {
public:
    string isPalindrome(int num) {
        int original = num;
        int reverse = 0;

        while (num != 0) {
            int digit = num % 10;
            reverse = reverse * 10 + digit;
            num = num / 10;
        }

        if (original == reverse) {
            return "Yes";
        } else {
            return "No";
        }
    }
};