def fourSum(nums, target):
    # Brute Force Method
    # ans = []
    # seen = set()
    # for i in range(len(nums)):
    #     for j in range(i + 1, len(nums)):
    #         for k in range(j + 1, len(nums)):
    #             for l in range(k + 1, len(nums)):
    #                 if nums[i] + nums[j] + nums[k] + nums[l] == target:
    #                     quad = sorted([nums[i], nums[j], nums[k], nums[l]])
    #                     if tuple(quad) not in seen:
    #                         seen.add(tuple(quad))
    #                         ans.append(quad)
    # return ans

    # Better Solution (Using Hash Map)
    # ans = []
    # seen = set()
    # n = len(nums)
    # for i in range(n):
    #     for j in range(i + 1, n):
    #         hashmap = {}
    #         for k in range(j + 1, n):
    #             required = target - (nums[i] + nums[j] + nums[k])
    #             if required in hashmap:
    #                 quad = sorted([nums[i], nums[j], nums[k], required])
    #                 if tuple(quad) not in seen:
    #                     seen.add(tuple(quad))
    #                     ans.append(quad)
    #             hashmap[nums[k]] = 1
    # return ans

    # Optimal Solution (Sorting + Two Pointer Approach)
    nums.sort()
    ans = []
    n = len(nums)

    for i in range(n):
        if i > 0 and nums[i] == nums[i - 1]:
            continue
        for j in range(i + 1, n):
            if j > i + 1 and nums[j] == nums[j - 1]:
                continue
            k, l = j + 1, n - 1
            while k < l:
                total = nums[i] + nums[j] + nums[k] + nums[l]
                if total == target:
                    ans.append([nums[i], nums[j], nums[k], nums[l]])
                    k += 1
                    l -= 1
                    while k < l and nums[k] == nums[k - 1]:
                        k += 1
                    while k < l and nums[l] == nums[l + 1]:
                        l -= 1
                elif total < target:
                    k += 1
                else:
                    l -= 1

    return ans


def main():
    nums = [1, 0, -1, 0, -2, 2]
    target = 0
    ans = fourSum(nums, target)


    print(ans)


if __name__ == "__main__":
    main()