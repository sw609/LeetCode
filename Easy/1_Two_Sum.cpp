#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Solution {
    public:
        vector <int> twoSum(vector<int>& nums, int target) {
            vector<int> sol;
            for (int x = 0; x<nums.size(); ++x){
                for (int y = x+1; y<nums.size(); ++y){
                    if (nums[y] == target - nums[x]){
                        sol.push_back(x);
                        sol.push_back(y);
                        return sol;
                    }
                }
            }
            return sol;
        }
    //================
    // int findY(int x, int target){
    //     if(x == 0) return target;
    //     if(target == 0) return -x;
    //     else{
    //         if(x == target)
    //             return 0;
    //         else
    //             return -x + target;
    //     }
    // }
    // vector<int> twoSum1(vector<int>& nums, int target) {
    //     vector<int> result;
    //     unordered_map<int, int> bank;
    //     int find = 0;
    //     for(int i = 0; i < nums.size(); i++){
    //         find = findY(nums[i], target);
    //         if(bank.find(find) != bank.end()){
    //             result.push_back(i);
    //             result.push_back(bank[find]);
    //         }else{
    //             if(bank.find(nums[i]) == bank.end())
    //                 bank.insert({nums[i],i});
    //         }
    //     }
    //     return result;
    // }
};

int main(){
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);

    Solution obj;
    for (int x: obj.twoSum(v1,6)){
        cout << x << endl;
    }
}


