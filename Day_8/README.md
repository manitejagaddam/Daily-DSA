# Missing Number Problem Explanation

## Problem Overview:
The problem asks to find the missing number in a sequence from `0` to `n`, where one number from this range is missing in the provided list. The list will contain `n` elements, all of which are distinct and from the range `[0, n]`.

## Approach:

### 1. **Bit Manipulation Approach:**

The first approach uses **bit manipulation**, specifically XOR, to solve the problem. The XOR operation has several key properties that make it particularly useful for this problem:

- `a ^ a = 0` (XORing a number with itself cancels it out)
- `a ^ 0 = a` (XORing a number with `0` leaves it unchanged)
- XOR is both **commutative** and **associative**, meaning the order of operations doesn't matter.

**Key Idea:**
- We XOR all numbers from `0` to `n` (inclusive).
- We XOR all elements from the input list `nums`.
- Due to the properties of XOR, any number that appears in both the index sequence and the input list cancels out.
- The number that doesn't cancel out is the missing number.

### 2. **Mathematical Formula Approach:**

The second approach uses a simple **mathematical formula** for summing the first `n` integers.

**Formula:**
- The sum of integers from `0` to `n` is given by the formula:  
 `Sum = (n(n + 1)) / 2`
- The missing number is simply the difference between the sum of the first `n` integers and the sum of the elements in the input list `nums`.

**Steps:**
- Calculate the expected sum of all numbers from `0` to `n` using the formula.
- Calculate the actual sum of elements in the input list.
- The missing number is the difference between the expected sum and the actual sum.

---

## Summary:

Both approaches, **bit manipulation** and **mathematical formula**, are efficient ways to solve the "Missing Number" problem. 

- The **bit manipulation** method has the advantage of being an in-place solution with constant space complexity.
- The **mathematical formula** approach is simpler and intuitive, using basic arithmetic to find the missing number.

Both approaches work in `O(n)` time, making them optimal for this problem.
