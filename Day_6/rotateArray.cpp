#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void rotate(vector<int> &nums, int k){
    
    // // BRUTE FORCE METHOD
    
    // int n = nums.size();

    // k = k % n; // if k is greater than nums.length() then this line will helps to reduce multiple iterations

    // for (int i = 0; i < k; i++) {
    //     int last = nums[n - 1]; // Store last element
    //     nums.pop_back();        // Remove last element
    //     nums.insert(nums.begin(), last); // Insert it at the beginning
    // }


    // // OPTIMAL SOLUTION

    int n = nums.size() ; 

    k = k % n;// if k is greater than nums.length() then this line will helps to reduce multiple iterations

    // k = 3

    reverse(nums.begin(), nums.end() - k);   // 1 2 3 4 5 6 7 8 -> 5 4 3 2 1 6 7 8
    reverse(nums.end() - k , nums.end());    // 5 4 3 2 1 6 7 8 -> 5 4 3 2 1 8 7 6
    reverse(nums.begin() , nums.end());      // 5 4 3 2 1 8 7 6 -> 6 7 8 1 2 3 4 5
}












int main(){

    vector<int> nums = {1,2,3,4,5,6,7,8};

    int k = 3;

    rotate(nums, k);

    for(auto i : nums){
        cout << i << " ";
    }cout << endl;


    return 0;
}
