#pragma once
#include <set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::set<int> elements;
        for (const int& n : nums) {
            if (!elements.count(n)) {
                elements.insert(n);
            } else {
                return true;
            }
        }
        return false;
    }
};