// Check given triangle is valid or not
// Description
// Given three numbers representing the lengths of the sides of a triangle, determine if a valid triangle can be formed with these sides.
// A triangle is valid if the sum of any two sides is greater than the third side.

// Input format
// Three space-separated numbers representing the sides of the triangle.

// Output format
// Print Yes if a valid triangle can be formed, otherwise print No.

//code :-

class Solution {
public:
    string isValidTriangle(int a, int b, int c) {
        if (a + b > c && b + c > a && a + c > b) {
            return "Yes";
        }
        else {
            return "No";
        }
    }
};


// Check a number is prime or not
// Description
// Given a number n, determine whether it is a prime number or not.
// A prime number is a number greater than 1 that has no divisors other than 1 and itself.

// Input format
// A single integer n.

// Output format
// Print Yes if the number is prime, otherwise print No.


//code:-

class Solution {
public:
    string isPrime(int n) {
        if (n <= 1) return "No";
        if (n == 2) return "Yes";
        if (n % 2 == 0) return "No";
        for (int i = 3; i * 1LL * i <= n; i += 2) {
            if (n % i == 0) return "No";
        }
        return "Yes";
    }
};