#pragma once
#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> left(nums.size(), 1);
        //left.reserve(nums.size());
        std::vector<int> right(nums.size(), 1);
        //right.reserve(nums.size());
        std::vector<int> products(nums.size(), 0);
        //products.reserve(nums.size());

        int runningTotal = 1;
        for (int i = nums.size() - 2; i >= 0; i--) { // for right products
            runningTotal *= nums[i + 1]; 
            right[i] = runningTotal;
        }
        runningTotal = 1;
        for (int i = 1; i <= nums.size() - 1; i++) { // for left products
            runningTotal *= nums[i - 1];
            left[i] = runningTotal;
        }

        for (int i = 0; i < nums.size(); i++) { // compute all products
            products[i] = right[i] * left[i];
        }

        return products;
    }

    /**
     * optimized version which uses one less vector
    */
    std::vector<int> productExceptSelfOptimized(std::vector<int>& nums) { 
        std::vector<int> products(nums.size(), 1);
        std::vector<int> right(nums.size(), 1);

        int runningTotal = 1;
        for (int i = nums.size() - 2; i >= 0; i--) { // for right products
            runningTotal *= nums[i + 1]; 
            right[i] = runningTotal;
        }

        runningTotal = 1;
        for (int i = 1; i <= nums.size() - 1; i++) { // for left products
            runningTotal *= nums[i - 1];
            products[i] = runningTotal;
        }

        for (int i = 0; i < nums.size(); i++) { // compute all products
            products[i] *= right[i];
        }

        return products;
    }
};