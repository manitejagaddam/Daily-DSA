def missing_number_bit_manipulation(nums):
    # BIT MANIPULATION
    original_xor = 0
    n = len(nums)
    for i in range(n):
        original_xor ^= i
        original_xor ^= nums[i]
    original_xor ^= n

    return original_xor


def missing_number_math(nums):
    # MATHEMATICAL FORMULA
    n = len(nums)
    original_sum = (n * (n + 1)) // 2
    actual_sum = sum(nums)

    return original_sum - actual_sum


if __name__ == "__main__":
    # Driver Code
    nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]

    print("Bit Manipulation:", missing_number_bit_manipulation(nums))
    print("Mathematical Formula:", missing_number_math(nums))
