def threeSum(nums):
    # Brute Force Method (Using 3 nested loops)
    # ans = []
    # for i in range(len(nums)):
    #     for j in range(i + 1, len(nums)):
    #         for k in range(j + 1, len(nums)):
    #             if nums[i] + nums[j] + nums[k] == 0:
    #                 triplet = sorted([nums[i], nums[j], nums[k]])
    #                 if triplet not in ans:
    #                     ans.append(triplet)
    # return ans
    
    

    # Better Solution (Using Hash Map)
    # ans = []
    # if len(nums) < 3:
    #     return ans
    # for i in range(len(nums)):
    #     mpp = {}
    #     for j in range(i + 1, len(nums)):
    #         target = -1 * (nums[i] + nums[j])
    #         if target in mpp:
    #             triplet = sorted([nums[i], nums[j], target])
    #             if triplet not in ans:
    #                 ans.append(triplet)
    #         mpp[nums[j]] = 1
    # return ans
    
    
    

    # Optimal Solution (Sorting + Two Pointer Approach)
    ans = []
    nums.sort()

    for i in range(len(nums)):
        if i != 0 and nums[i] == nums[i - 1]:
            continue
        j = i + 1
        k = len(nums) - 1
        while j < k:
            sum_ = nums[i] + nums[j] + nums[k]
            if sum_ == 0:
                ans.append([nums[i], nums[j], nums[k]])
                j += 1
                k -= 1
                while j < k and nums[j] == nums[j - 1]:
                    j += 1
                while j < k and nums[k] == nums[k + 1]:
                    k -= 1
            elif sum_ < 0:
                j += 1
            else:
                k -= 1

    return ans



def main():
        


    question = [-1, 0, 1, 2, -1, -4]
    ans = threeSum(question)

    
    print(ans)


if __name__ == "__main__":
    main()