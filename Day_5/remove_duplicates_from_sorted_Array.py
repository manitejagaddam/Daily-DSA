def remove_duplicates(nums):
    # BRUTE FORCE METHOD
    # dummy = [nums[0]]
    # for i in range(1, len(nums)):
    #     if dummy[-1] != nums[i]:
    #         dummy.append(nums[i])
    # nums[:] = dummy
    # return len(dummy)

    # BETTER SOLUTION
    # mpp = {}
    # for num in nums:
    #     mpp[num] = mpp.get(num, 0) + 1
    # index = 0
    # for key in sorted(mpp.keys()):
    #     nums[index] = key
    #     index += 1
    # return len(mpp)

    # OPTIMAL SOLUTION
    unique = 0
    for i in range(1, len(nums)):
        if nums[unique] != nums[i]:
            unique += 1
            nums[unique] = nums[i]
    return unique + 1


def main():
    nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
    unique = remove_duplicates(nums)
    print("Unique elements in-place:")
    for i in range(unique):
        print(nums[i], end=" ")
    print()


if __name__ == "__main__":
    main()
