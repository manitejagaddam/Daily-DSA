def check(nums):
    count = 0
    n = len(nums)

    for i in range(n):
        if nums[i] > nums[(i + 1) % n]:
            count += 1
        if count >= 2:
            return False

    return True


def main():
    nums = [3, 4, 5, 1, 2]

    if check(nums):
        print("Array is Sorted")
    else:
        print("Array is Not Sorted")


if __name__ == "__main__":
    main()