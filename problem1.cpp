#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

int main(){
    int input,target;
    vector<int> nums;
    cout << "please enter array numbers";
    while (cin >> input)
    nums.push_back(input);
    cout << "input target value";
    cin >> target ;
    Solution obj1;
    vector<int> answer = obj1.twoSum(nums,target);
    cout << answer[0] << answer[1];
    // obj1.twoSum(nums,target) <<endl;
    return 0;
}

vector<int> Solution :: twoSum(vector<int>& nums, int target) {
    vector<int> answer;
    for(unsigned int i=0; i<nums.size()-1;i++){
        for(unsigned int j=i+1; j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                answer.push_back(nums[i]);
                answer.push_back(nums[j]);
                break;
            }
            
        }
    }
    return answer;
}
