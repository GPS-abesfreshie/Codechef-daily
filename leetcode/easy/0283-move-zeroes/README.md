# Move Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

 **Note**  that you must do this in-place without making a copy of the array.

 

 **Example 1:** 

```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [0]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -231 <= nums[i] <= 231 - 1

 

 **Follow up:**  Could you minimize the total number of operations done?

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 18.71%)  
**Memory:** 23.8 MB (beats 53.05%)  
**Submitted:** 2026-10-25T12:10:13.408Z  

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insert_pos = 0;

        // Step 1: Shift all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insert_pos] = nums[i];
                insert_pos++;
            }
        }

        // Step 2: Fill the rest of the vector with zeroes
        while (insert_pos < nums.size()) {
            nums[insert_pos] = 0;
            insert_pos++;
        }
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/move-zeroes/)