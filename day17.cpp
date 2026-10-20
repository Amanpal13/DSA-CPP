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



//optimal code:-


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int candidate1 = 0, candidate2 = 0;
        int count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++) {
            if (count1 > 0 && nums[i] == candidate1) {
                count1++;
            }
            else if (count2 > 0 && nums[i] == candidate2) {
                count2++;
            }
            else if (count1 == 0) {
                candidate1 = nums[i];
                count1 = 1;
            }
            else if (count2 == 0) {
                candidate2 = nums[i];
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        vector<int> ans;
        count1 = 0;
        count2 = 0;

        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        if (count1 > n / 3) ans.push_back(candidate1);
        if (count2 > n / 3) ans.push_back(candidate2);

        return ans;
    }
};
