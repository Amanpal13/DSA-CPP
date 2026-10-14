// 54. Spiral Matrix
// Given an m x n matrix, return all elements of the matrix in spiral order.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:


// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 10
// -100 <= matrix[i][j] <= 100


//code:-


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> arr;
        
        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;

         while(top <= bottom && left <= right) {

         for(int i = left; i <= right; i++){
                arr.push_back(matrix[top][i]);
            }
            top++;

              for(int j = top; j <= bottom; j++){
                arr.push_back(matrix[j][right]);
            }
            right--;

            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    arr.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

             if(left <= right){
                for(int j = bottom; j >= top; j--){
                    arr.push_back(matrix[j][left]);
                }
                left++;
            }
         }

        return arr;

    }
};

// 560. Subarray Sum Equals K

// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

 

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 2 * 104
// -1000 <= nums[i] <= 1000
// -107 <= k <= 107


//code(brute code):-

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        for(int i=0 ; i<nums.size() ;i++){
            int sum = 0;
            for(int j=i ; j<nums.size() ;j++){
                sum += nums[j];

                if(sum == k){
                    count++;
                }
            }
        }
        
        return count; 
        
    }
};