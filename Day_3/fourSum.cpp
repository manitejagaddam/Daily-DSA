#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{

    // // Brute Force Method

    // vector<vector<int>> ans;
    // set<vector<int>> st;
    // for(int i = 0 ; i < nums.size() ; i++){
    //     for(int j = i + 1 ; j < nums.size() ; j++){
    //         for(int k = j + 1 ; k < nums.size() ; k++){
    //             for(int l = k + 1 ; l < nums.size() ; l++){
    //                 if (nums[i] + nums[j] + nums[k] + nums[l] == target){
    //                     vector<int> a = {nums[i], nums[j], nums[k], nums[l]};
    //                     sort(a.begin(), a.end());
    //                     st.insert(a);
    //                 }
    //             }
    //         }
    //     }
    // }

    // for(auto i : st){
    //     ans.push_back(i);
    // }

    // return ans;

    // // Better Solution

    // set<vector<int>> st;
    // int n = nums.size();

    // for(int i = 0 ; i < n ; i++){
    //     for(int j = i + 1 ; j < n ; j++){
    //         map<int, int> mpp;
    //         for(int k = j + 1 ; k < n ; k++){
    //             int required = target - (nums[i] + nums[j] + nums[k]);
    //             if(mpp.find(required) != mpp.end()){
    //                 vector<int> a = {nums[i], nums[j], nums[k], required};
    //                 sort(a.begin(), a.end());
    //                 st.insert(a);
    //             }
    //             mpp[nums[k]]++;
    //         }
    //     }
    // }

    // vector<vector<int>> ans;

    // for(vector<int> i : st){
    //     ans.push_back(i);
    // }

    // return ans;

    // // OPTIMAL SOLUTION

    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {

        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n; j++)
        {

            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    l--;
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> ans = fourSum(nums, target);

    for (vector<int> i : ans)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}