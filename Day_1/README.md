# 2 Sum Problem - Day 1 of 100 Days of DSA

- Problem Statement

- Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

- Approaches Explored

1. Brute Force

- Time Complexity: O(n^2)

- Space Complexity: O(1)

- Method:

- Use two nested loops to check every pair of numbers.

- Return the indices of the pair that adds up to the target.

2. Better Solution

- Time Complexity: O(n)

- Space Complexity: O(n)

- Method:

- Use a hash map to store each number's complement with respect to the target.

- As we iterate through the array, check if the current number exists in the hash map.

3. Optimal Solution

- Time Complexity: O(n log n) (due to sorting)

- Space Complexity: O(1) (if sorting in-place)

- Method:

- Sort the array.

- Use two pointers to find the pair that sums up to the target.

