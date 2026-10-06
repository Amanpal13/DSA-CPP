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


//Smallest Digit
// Description


// Hint
// Problem Description
// Given a non-negative integer num, your task is to determine the smallest digit present in this number. For every individual digit within the number, evaluate them to identify which is the smallest.

// Function Signature:

// python

// smallestDigit(num: int) -> int
// Example
// Input: num = 5892
// Output: 2
// Explanation: Digits in 5892 are 5, 8, 9, and 2. The smallest digit among these is 2.
// Input: num = 4356
// Output: 3
// Explanation: The digits present in 4356 are 4, 3, 5, and 6. The smallest digit is 3.
// Input: num = 1005
// Output: 0 Explanation: Digits in 1005 are 1, 0, 0, and 5. Here, 0 is the smallest digit.
// The function should work efficiently within the defined constraints.

// Math
// Number Manipulation
// Examples
// Submissions: 0
// Accepted: 0
// Acceptance Rate: 0%
// Input: num = 123

// Output: 1

// Explanation: Smallest digit in 123 is 1.

// Input: num = 456

// Output: 4

// Explanation: Smallest digit in 456 is 4.

// Input: num = 78910

// Output: 0


//code:-


class Solution {
public:
    int smallestDigit(int num) {

        if (num == 0) {
            return 0;
        }

        int smallest = 9;

        while (num != 0) {
            int digit = num % 10;

            if (digit < smallest) {
                smallest = digit;
            }

            num = num / 10;
        }

        return smallest;
    }
};



//check if number is even or not

//code:-


class Solution {
public:
    string checkEvenOdd(int num) {
        // Implement logic to check if num is even or odd
        if (num % 2 == 0){
            return "Even";
        }
        else{
            return "Odd";
        }
    }
};




//reverse a number

// Problem Description
// You are given a positive integer num. Your task is to reverse its digits and return the resulting number. The most significant digit of the original number should become the least significant in the reversed number, and so on for each digit. Importantly, the number num is never negative, which means you don't have to handle negative signs. Furthermore, any leading zeros that appear in the reversed number should not be included in the output. For instance, if the input is 100, the reversed number will be 1 as leading zeros are omitted.



//code:-


class Solution {
public:
    int reverseNumber(int num) {
        // Implement logic to reverse the number
        int rev = 0;
        while(num != 0){
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num/10;
        }
        return rev;
    }

};