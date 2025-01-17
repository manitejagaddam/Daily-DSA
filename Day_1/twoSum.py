def two_sum(nums, target):
    num_map = {}
    for i, num in enumerate(nums):
        required = target - num
        if required in num_map:
            return [num_map[required], i]
        num_map[num] = i
    return []

# Example usage


def main():
    nums = [2, 7, 11, 15]
    target = 9

    result = two_sum(nums, target)

    if result:
        print(f"Indices: {result}")
    else:
        print("No two numbers add up to the target.")


if __name__ == "__main__":
    main()