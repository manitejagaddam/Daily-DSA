#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



class MaxConsecutiveOnes{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int countmax = 0;
        for (auto i : nums){
            if (i == 1){
                count++;
            }else{
                countmax = max(count, countmax);
                count = 0;
            }
        }
        //solves the edge case where the max consecutives are at the end of the vector
        countmax = max(count, countmax);
        return countmax;
    }
};



int main(){
    
    vector<int> nums = {1,1,0,1,1,1};

    MaxConsecutiveOnes maxConsecutive = MaxConsecutiveOnes();

    int ans = maxConsecutive.findMaxConsecutiveOnes(nums);

    cout << ans << endl;

}