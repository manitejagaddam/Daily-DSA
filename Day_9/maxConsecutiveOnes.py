class MaxConsecutiveOnes:
    def findMaxConsecutiveOnes(self, nums):
        count = 0         # Tracks the current streak of consecutive 1s
        max_count = 0     # Tracks the maximum streak of consecutive 1s
        
        for i in nums:
            if i == 1:
                count += 1  # Increment count if the element is 1
            else:
                max_count = max(max_count, count)  # Update the maximum streak
                count = 0  # Reset the count for the next streak
        
        # Handle the edge case where the maximum streak is at the end of the array
        max_count = max(max_count, count)
        
        return max_count


def main():
    nums = [1, 1, 0, 1, 1, 1]
    max_consecutive = MaxConsecutiveOnes()
    ans = max_consecutive.findMaxConsecutiveOnes(nums)
    print(ans)
    


# Example usage
if __name__ == "__main__":
    main()
