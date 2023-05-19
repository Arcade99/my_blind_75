#pragma once
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            int left = numbers[i], right = numbers[j];
            if (left + right > target) {
                if (right > left) {
                    j--;
                } else {
                    i++;
                }
            } else if (left + right < target) {
                if (right < left) {
                    j--;
                } else {
                    i++;
                }
            } else {
                return {i, j};
            }
        }
        return {};
    }

    std::vector<int> twoSumBrute(std::vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size() - 1; i++) {
            for (int j = i + 1; j < numbers.size(); j++) {
                if ((numbers[i] + numbers[j]) == target) {
                    return {i, j};
                }
            }
        }
    }
};