#pragma once
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> myMap;
        for (int i = 0; i < nums.size(); i++) {
            if (myMap.count(nums[i]) != 0) {
                return {myMap[nums[i]], i};
            }
            myMap[(target - nums[i])] = i;
        }
        return {-1, -1};
    }
};