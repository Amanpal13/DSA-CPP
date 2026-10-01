// Find simple interest

// Description
// You are given the Principal (P), Rate of Interest (R) (in percentage per annum), and Time (T) (in years).
// Your task is to calculate the Simple Interest (SI) using the formula:

// SI = (P × R × T) / 100

// Input
// Three integers:
// P → Principal amount
// R → Rate of Interest (in %)
// T → Time (in years)
// Output
// A single integer: the Simple Interest truncated to a whole number, i.e. (P × R × T) / 100 using integer division.
// Note: the intermediate product P × R × T can exceed the 32-bit integer range — use a 64-bit type (long long in C++, long in Java) for the calculation.

//code:-

class Solution {
public:
    int simpleInterest(int P, int R, int T) {
        // your code goes here
        long long si = (1LL * P * R * T)/100;
        return int(si) ;
    }
};

// Find perimeter of a triangle

// Given the lengths of the three sides of a triangle, calculate its perimeter. The perimeter of a triangle is the sum of the lengths of its three sides.

//code :-

class Solution {
public:
    int findPerimeter(int a, int b, int c) {
        // your code goes here
        return a + b+ c;
    }
};
