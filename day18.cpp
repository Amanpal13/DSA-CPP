// 15. 3Sum
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.


//code:-


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size() - 2; i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--; 
                    while (j < k && nums[j] == nums[j - 1]) {
                    j++;
                    }
                while (j < k && nums[k] == nums[k + 1]) {
                    k--;
                    } 
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
                    
            }
        }
        return ans;
        
    }
};

// 18. 4Sum


// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

 

// Example 1:

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Example 2:

// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]


//code:-


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int a = 0; a < n - 3; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) {
                continue;
            }

            for (int b = a + 1; b < n - 2; b++) {
                if (b > a + 1 && nums[b] == nums[b - 1]) {
                    continue;
                }

                int c = b + 1;
                int d = n - 1;

                while (c < d) {
                    long long sum = (long long)nums[a] + nums[b]
                                  + nums[c] + nums[d];

                    if (sum == target) {
                        ans.push_back({
                            nums[a], nums[b], nums[c], nums[d]
                        });

                        c++;
                        d--;

                        while (c < d && nums[c] == nums[c - 1]) {
                            c++;
                        }

                        while (c < d && nums[d] == nums[d + 1]) {
                            d--;
                        }
                    }
                    else if (sum < target) {
                        c++;
                    }
                    else {
                        d--;
                    }
                }
            }
        }

        return ans;
    }
};

