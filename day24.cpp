// 493. Reverse Pairs
// Given an integer array nums, return the number of reverse pairs in the array.

// A reverse pair is a pair (i, j) where:

// 0 <= i < j < nums.length and
// nums[i] > 2 * nums[j].
 

// Example 1:

// Input: nums = [1,3,2,3,1]
// Output: 2
// Explanation: The reverse pairs are:
// (1, 4) --> nums[1] = 3, nums[4] = 1, 3 > 2 * 1
// (3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1
// Example 2:

// Input: nums = [2,4,3,5,1]
// Output: 3
// Explanation: The reverse pairs are:
// (1, 4) --> nums[1] = 4, nums[4] = 1, 4 > 2 * 1
// (2, 4) --> nums[2] = 3, nums[4] = 1, 3 > 2 * 1
// (3, 4) --> nums[3] = 5, nums[4] = 1, 5 > 2 * 1

//code:-
//brute force code


class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] > 2LL * nums[j]) {
                    count++;
                }
            }
        }

        return count;
    }
};
//tle occur doesnt pass every test


//optimal solution 
//merge sort use:
//code:-

class Solution {
public:
void merge(vector<int>& nums, int low, int mid, int high){
     vector<int> temp;

    int i = low;
    int j = mid + 1;
    while(i <= mid && j<= high){
        if(nums[i] <= nums[j]){
            temp.push_back(nums[i]);
            i++ ;
        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j <= high){
        temp.push_back(nums[j]);
        j++;
    }
    for(int k=low ; k <= high ;k++){
        nums[k] = temp[k-low];
    }
}

int mergeSort(vector<int>& nums, int low, int high){
    if (low >= high) return 0;

        int mid = low + (high - low) / 2;

        int leftCount = mergeSort(nums, low, mid);
        int rightCount = mergeSort(nums, mid + 1, high);

        int count = leftCount + rightCount;

    int j = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (j <= high && nums[i] > 2LL * nums[j]) {
            j++;
        }
        count += j - (mid + 1);
    }

    merge(nums, low, mid, high);

    return count;
}

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }      
};