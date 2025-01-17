#include <iostream>
#include <vector>

using namespace std;


int missingNumberBitManipulation(vector<int> nums){

    // BIT MANIPULATION

    int original_xor = 0;
    int n = nums.size();
    for(int i = 0 ; i < n ; i++){
        original_xor ^= i;
        original_xor ^= nums[i];
    }
    original_xor ^= n;

    return original_xor;



}



int missingNumberMaths(vector<int> nums){
    // Mathematical Form

    int n = nums.size();
    int original_sum = (n * (n + 1))/2;
    int sum = 0;
    for(int i : nums){
        sum += i;
    }

    return original_sum - sum;
}



int main(){

    vector<int> nums= {9,6,4,2,3,5,7,0,1};

    cout << "Bit Manipulation : " << missingNumberBitManipulation(nums) << endl;;
    cout << "Mathematical Formula : " << missingNumberMaths(nums) << endl;;

    return 0;

}