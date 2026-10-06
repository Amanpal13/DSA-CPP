// Max Consecutive Ones

// Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:

// Input: nums = [1,0,1,1,0,1]
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.

//code:-


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount=0;
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
                if(maxcount < count){
                    maxcount = count ;
                }
            }
            else if (nums[i] == 0){
                count = 0;
            } 
        }
        return maxcount;
        
    }
};



// 136. Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

 

// Example 1:

// Input: nums = [2,2,1]

// Output: 1

// Example 2:

// Input: nums = [4,1,2,1,2]

// Output: 4

// Example 3:

// Input: nums = [1]

// Output: 1


//code:-


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};


// 1. two sum 
// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]


//code:-


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                k = nums[i] + nums[j];
                if(k == target){
                    return {i,j};
                
                }
                }           
        }
        return{};
        
    }
};


//Sort Colours

// You are given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]

// Output: [0,0,1,1,2,2]

// Explanation:

// The array has two 0s, two 1s, and two 2s. Sorting them in-place places all 0s first, then all 1s, then all 2s.

// Example 2:

// Input: nums = [2,0,1]

// Output: [0,1,2]

// Explanation:

// The array has one each of 0, 1, and 2, arranged in-place in the order 0, 1, 2.


//code:-


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i=0 ; i<nums.size();i++){
        if (nums[i] == 0){
    zero++;
        }
else if (nums[i] == 1){
    one++;
}
else{
    two++;
}}
    for(int i= 0; i<zero ; i++){
        nums[i] = 0;
    }
    for (int i=zero; i<zero + one ; i++){
        nums[i] = 1;
    }
    for (int i=zero + one; i<zero + one + two ; i++){
        nums[i] = 2;
    }
        
    }
};

