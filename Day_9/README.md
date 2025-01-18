# Max Consecutive Ones Problem

## Problem Statement
The **Max Consecutive Ones** problem involves finding the maximum number of consecutive `1`s in a binary array. Given an array of integers containing only `0`s and `1`s, the goal is to calculate the longest streak of `1`s present in the array.

### Example Input:
- `nums = [1, 1, 0, 1, 1, 1]`

### Expected Output:
- **Output:** `3`
  - Explanation: The longest streak of consecutive `1`s in the array is `[1, 1, 1]`, which has a length of `3`.

### Problem Link:
You can find the problem on [LeetCode - Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/).

---

## Approach and Solution

### Key Intuition
The solution involves iterating through the array while maintaining two variables:
1. **Current Streak (`count`)**: Keeps track of the number of consecutive `1`s encountered so far.
2. **Maximum Streak (`max_count`)**: Stores the maximum streak of consecutive `1`s found.

The main logic lies in resetting the `count` whenever a `0` is encountered and updating the `max_count` to reflect the longest streak.

### Steps to Solve
1. **Initialize Variables**:
   - Set `count` to 0 (to track the current streak of `1`s).
   - Set `max_count` to 0 (to track the maximum streak encountered).

2. **Iterate Through the Array**:
   - If the current element is `1`, increment `count`.
   - If the current element is `0`:
     - Compare `count` with `max_count` and update `max_count` if necessary.
     - Reset `count` to 0 to start counting a new streak.

3. **Handle Edge Cases**:
   - After finishing the loop, compare `count` with `max_count` one final time to ensure streaks at the end of the array are accounted for.

4. **Return the Result**:
   - The value of `max_count` represents the length of the longest streak of consecutive `1`s.

---

## Time and Space Complexity

### Time Complexity:
- **O(n)**: The solution involves a single pass through the array, making it linear in time.

### Space Complexity:
- **O(1)**: The algorithm uses only a constant amount of extra space.

---

## Example Walkthrough

### Input:
`nums = [1, 1, 0, 1, 1, 1]`

### Execution:
1. Initialize `count = 0` and `max_count = 0`.
2. Traverse the array:
   - First `1`: Increment `count` → `count = 1`.
   - Second `1`: Increment `count` → `count = 2`.
   - Encounter `0`: Update `max_count` → `max_count = max(0, 2) = 2`, reset `count = 0`.
   - Third `1`: Increment `count` → `count = 1`.
   - Fourth `1`: Increment `count` → `count = 2`.
   - Fifth `1`: Increment `count` → `count = 3`.
3. After traversal, update `max_count` → `max_count = max(2, 3) = 3`.

### Output:
**Result:** `3`

---

## Edge Cases
1. **No `1`s in the array**:
   - Input: `nums = [0, 0, 0]`
   - Output: `0`

2. **All `1`s in the array**:
   - Input: `nums = [1, 1, 1]`
   - Output: `3`

3. **Longest streak at the end of the array**:
   - Input: `nums = [0, 1, 1, 1]`
   - Output: `3`

---

## Applications
This problem has practical applications in various scenarios:
1. **Binary Data Analysis**: Identifying patterns or streaks in binary sequences.
2. **Signal Processing**: Detecting continuous signals in streams of `0`s and `1`s.
3. **Game Development**: Tracking player actions or events over time.

---

## Conclusion
The **Max Consecutive Ones** problem is a classic example of an array traversal problem that emphasizes efficient handling of streaks. By iterating through the array only once and using constant space, the solution is both optimal and easy to implement. It also serves as a foundation for more advanced problems involving sequences and patterns.
