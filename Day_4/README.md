# Is Array Sorted or Not

This is an interesting problem that challenges beginners to improve their understanding of edge cases and array manipulation.

## Approach

1. **Initialize a counter**: Start by declaring a variable (`count`) that will track the number of "drops" in the array (where an element is greater than the next one).
   
2. **Traverse the array**: Loop through the array, comparing each element with the next. If `nums[i] > nums[i + 1]`, increment the counter.

3. **Edge Case**: Don’t forget the comparison between the last element and the first element of the array. Use modulo to handle the circular nature of the array.

4. **Check for more than one drop**: If the counter exceeds 1, return `false`, as more than one drop means the array isn’t sorted and rotated.
