#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    // // BRUTE FORCE METHOD

    // vector<int> dummy;
    // dummy.push_back(nums[0]);
    // for(int i = 1 ; i < nums.size() ; i++){
    //     if(dummy.back() != nums[i]) dummy.push_back(nums[i]);
    // }
    // nums = dummy;
    // return dummy.size();



    // // BETTER SOLUTION

    // map<int, int> mpp;
    // for(int i : nums){
    //     mpp[i]++;
    // }
    // int index = 0;
    // for(auto i : mpp){
    //     nums[index++] = i.first;
    // }
    // return mpp.size();



    // // OPTIMAL SOLUTION
    
    int unique = 0;
    for(int i = 1 ; i < nums.size() ; i++){
        if(nums[unique] != nums[i]) nums[++unique] = nums[i]; 
    }
    return unique + 1;
}


int main(){

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    
    int unique = removeDuplicates(nums);

    for(int i = 0 ; i < unique ; i++){
        cout << nums[i] << " ";
    }cout << endl;


    return 0;
}
