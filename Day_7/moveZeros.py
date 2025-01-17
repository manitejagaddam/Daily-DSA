def moveZeros(nums : list[int]) -> None:
    
    n = len(nums)
    
    zero = -1
    
    for i in range(n):
        if nums[i] == 0:
            zero = i
            break
        
    
    if zero == -1:
        return
    
    for i in range(zero + 1, n):
        if nums[i] != 0:
            nums[i], nums[zero] = nums[zero], nums[i]
            zero += 1
    


def main ():
    nums = [1,0,0,1,0,1,0,1,0,1,0,1]
    moveZeros(nums)
    print(nums)


if __name__ == "__main__":
    main()