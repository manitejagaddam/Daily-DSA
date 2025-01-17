#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check(vector<int> &nums){
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++){

        if (nums[i] > nums[(i + 1) % n]) count++;
        if (count >= 2) return false;
    }

    return true;
}


int main(){
    vector<int> nums = {3,4,5,1,2};

    if(check(nums)) cout << "Array is Sorted";
    else cout << "Array is Not Srted";

    return 0;
}