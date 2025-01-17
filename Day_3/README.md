# 4 Sum Problem

- 4Sum Problem which has a crazy solution I came up with, each of the solutions has its own importance in building an optimal solution

1. Brute Force: Used Four for loops and checked if the sum was equal to zero or target values if it is then sort it and append it to the returning vector.

2. Better Solution: Used the Map and Set Data structure to decrease the number of loops from 4 to 3. Calculate the target value by adding both numbers and finding whether the element is available or not if it is available sort it add it to the result vector and return.

3. Optimal Solution: Used 4 Pointer approach, first we need to sort the entire array and then we need to iterate through the array find the required sum store it in a result vector, and return it.