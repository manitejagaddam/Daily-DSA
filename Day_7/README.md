# Moving Zeros to the End of the Array

## Problem Statement

The task is to move all zero elements in an integer array to the end while maintaining the relative order of non-zero elements. This needs to be done in-place, without using extra space, and the solution should operate in linear time, `O(n)`.

**Example:**
Given the input array:
[1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1]

After moving the zeros to the end, the array should look like:
[1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0]


## Approach

### Step 1: Find the First Zero
Start by iterating over the array to identify the first occurrence of zero (`0`). We use a pointer (`zero`) to store the index of the first zero. If no zero is found, return immediately as no rearrangement is needed.

### Step 2: Swap Non-Zero Elements
After identifying the first zero, iterate over the rest of the array starting from the index right after the first zero. When a non-zero element is found, swap it with the first zero. This ensures that the non-zero elements are moved to the front, and the zeros are pushed to the end.

### Step 3: Update the Zero Pointer
Each time a non-zero element is swapped with a zero, increment the `zero` pointer. This helps track the next position where the zero should be placed.

### In-place Operation
The array is modified in-place, which means no additional memory allocation is required. This ensures that the space complexity is kept at `O(1)`.

## Time and Space Complexity

- **Time Complexity:** The algorithm runs in `O(n)` time, where `n` is the length of the array. This is because the array is traversed twice: once to find the first zero and once to rearrange elements.
- **Space Complexity:** The space complexity is `O(1)` since the solution operates in-place and does not require additional memory proportional to the input size.

## Conclusion

This approach efficiently solves the problem by moving zeros to the end of the array while preserving the order of non-zero elements. The solution is both time-efficient and space-efficient, with a linear time complexity and constant space usage.
