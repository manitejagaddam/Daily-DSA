// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums){
    // // Brute Force Method

        // set<vector<int>> set;
        // if(nums.size() < 3 ) return {};
        // for(int i = 0 ; i < nums.size() ; i++){
        //     for(int j = i + 1 ; j < nums.size() ; j++){
        //         for(int k = j + 1 ; k < nums.size() ; k++){
        //             if(nums[i] + nums[j] + nums[k] == 0){
        //                 vector<int> a = {nums[i], nums[j], nums[k]};
        //                 sort(a.begin(), a.end());
        //                 set.insert(a);
        //             }
        //         }
        //     }
        // }

        // vector<vector<int>> ans;

        // for(auto i : set){
        //     ans.push_back(i);
        // }
        // return ans;


        
        //// Hash Map Solution
        
        // set<vector<int>> res;
        // if(nums.size() < 3) return {};
        // for (int i = 0 ; i < nums.size() ; i++){
        //     map<int, int> mpp;
        //     // vector<int> a;
        //     // int sum = nums[i];
        //     for(int j = i + 1 ; j < nums.size() ; j++){
        //         int sum = nums[i] + nums[j];
        //         int target = -1 * sum;
        //         if(mpp.find(target) != mpp.end()){
        //             vector<int> triplet = {nums[i], nums[j], target};
        //             sort(triplet.begin(), triplet.end()); 
        //             res.insert(triplet);
        //         }
        //         mpp[nums[j]]++;
        //     }
        // }
        

        // vector<vector<int>> ans;
        // for (auto i : res){
        //     ans.push_back(i);
        // }

        // return ans;


        // // OPTIMAL SOLUTION

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0 ; i < nums.size() ; i++){
            if(i != 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    vector<int> a = {nums[i], nums[j], nums[k]};
                    ans.push_back(a);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j - 1]) {j++;}
                    while(j < k && nums[k] == nums[k + 1]) {k--;}
                }else if(sum < 0){
                    j++;
                } else{
                    k--;
                }
            }
            
        }
    
        return ans;
}



int main(){

    vector<int> question = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    ans = threeSum(question);

    for (vector<int> i : ans){
        for(int j : i){
            cout << j << " ";
        }cout << endl;
    }

}