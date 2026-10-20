// 229. Majority Element II

// Given an integer array of size n, find all elements that appear more than ⌊n / 3⌋ times.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: [3]
// Example 2:

// Input: nums = [1]
// Output: [1]
// Example 3:

// Input: nums = [1,2]
// Output: [1,2]

//code:-


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int k = nums.size();
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            int count = 0;

            for (int j = 0; j < k; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count > k / 3) {
                bool alreadyAdded = false;

                for (int x = 0; x < ans.size(); x++) {
                    if (ans[x] == nums[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }

                if (!alreadyAdded) {
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};
