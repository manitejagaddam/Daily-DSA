#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void moveZeros(vector<int>& nums){
    int n = nums.size();
    int zero = -1;
    
    for(int i = 0 ; i < n ; i++){
        if(nums[i] == 0){
            zero = i;
            break;
        }
    }

    if(zero == -1) return ;

    for(int i = zero + 1 ; i < n ; i++){
        if(nums[i] != 0) {
            swap(nums[i], nums[zero]);
            zero++;
        }
    }
}





int main(){

    vector<int> nums = {1,0,0,1,0,1,0,1,0,1,0,1};
    moveZeros(nums);
    

    for(int i : nums){
        cout << i << " ";
    }cout << endl;


    return 0;

}