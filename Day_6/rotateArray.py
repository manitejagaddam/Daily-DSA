from typing import List

def rotate(nums: List[int], k: int) -> None:
    # Uncomment the brute-force solution to use it
    
    # # BRUTE FORCE METHOD
    # n = len(nums)
    # k = k % n  # If k is greater than nums.length(), this line helps reduce multiple iterations
    # for _ in range(k):
    #     last = nums.pop()      # Remove the last element
    #     nums.insert(0, last)   # Insert it at the beginning
    
    # OPTIMAL SOLUTION
    n = len(nums)
    k = k % n  # Adjust k if greater than the array length
    
    # Reverse the first n-k elements
    nums[:n-k] = reversed(nums[:n-k])  # [1, 2, 3, 4, 5, 6, 7, 8] -> [5, 4, 3, 2, 1, 6, 7, 8]
    # Reverse the last k elements
    nums[n-k:] = reversed(nums[n-k:])  # [5, 4, 3, 2, 1, 6, 7, 8] -> [5, 4, 3, 2, 1, 8, 7, 6]
    # Reverse the whole array
    nums[:] = reversed(nums)           # [5, 4, 3, 2, 1, 8, 7, 6] -> [6, 7, 8, 1, 2, 3, 4, 5]

def main():
    nums = [1, 2, 3, 4, 5, 6, 7, 8]
    k = 3

    print("Original array:", nums)
    rotate(nums, k)
    print("Rotated array:", nums)

if __name__ == "__main__":
    main()
