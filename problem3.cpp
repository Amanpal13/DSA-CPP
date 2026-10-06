// 210. Sum of Digits
// Problem Description
// You are required to write a function that calculates the sum of the digits of a given non-negative integer num. This task aims to enhance your understanding of basic numerical operations, which are fundamental to developing algorithmic logic. The function should return a single integer, which is the sum of all digits present in the input number. The integer num will be in the range from 0 to 1 billion inclusive. This means your function must be efficient enough to handle large numbers within this range.

// Examples
// Example 1:
// Input:


// num = 12345
// Output:


// 15
// Explanation:

// The individual digits of the number 12345 are 1, 2, 3, 4, and 5. Their sum is 1 + 2 + 3 + 4 + 5 = 15.

// Example 2:
// Input:


// num = 0
// Output:


// 0
// Explanation:

// The only digit here is 0, so the sum is 0.

//code:-


class Solution {
public:
    int sumOfDigits(int num) {
        int sum = 0;

        while (num != 0) {
            int digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }

        return sum;
    }
};