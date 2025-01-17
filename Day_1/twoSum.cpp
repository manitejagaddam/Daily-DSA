#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Function Declaration
vector<int> twoSum(vector<int>& nums, int target){
    map <int, int> mpp;
    vector<int> ans;
    for(int i = 0 ; i < nums.size() ; i++){
        int required = target - nums[i];
        if(mpp.find(required) != mpp.end()){
            return {mpp[required], i};
        }
        mpp[nums[i]] = i;
    }
    
    return {};

}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;


    vector<int> result = twoSum(nums, target);


    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}