// Description


// Hint
// Problem Description
// Implement a function that determines if a given integer num is a power of 2. An integer is considered a power of 2 if it can be represented in the form of 2x, where x is a non-negative integer.

// Your task is to return Yes if the input number num is a power of 2, and No otherwise.

// Example
// Input: num = 16

// Output: Yes

// Explanation: 16 is 24, which is a power of 2.

// Input: num = 18

// Output: No

// Explanation: 18 cannot be expressed as a power of 2.

//code:-


class Solution {
public:
    string isPowerOfTwo(int num) {
        if (num <= 0) {
            return "No";
        }

        while (num > 1 && num % 2 == 0) {
            num = num / 2;
        }

        if (num == 1) {
            return "Yes";
        } else {
            return "No";
        }
    }
};
