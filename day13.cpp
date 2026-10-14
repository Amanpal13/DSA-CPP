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