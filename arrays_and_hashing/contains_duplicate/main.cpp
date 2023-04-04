#include <iostream>
#include "./solution.h"

bool test1(Solution&);
bool test2(Solution&);
bool test3(Solution&);

int main(int argc, char** argv) {
    Solution solution;
    if (test1(solution) != true) return 1;
    if (test1(solution) != false) return 1;
    if (test1(solution) != true) return 1;
    return 0;
}

bool test1(Solution &solution) {
    std::vector<int> nums = {1, 2, 3, 1};
    const bool expected = true;
    return solution.containsDuplicate(nums) == expected;
}

bool test2(Solution& solution) {
    std::vector<int> nums = {1, 2, 3, 4};
    const bool expected = false;
    return solution.containsDuplicate(nums) == expected;
}

bool test3(Solution& solution) {
    std::vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    const bool expected = true;
    return solution.containsDuplicate(nums) == expected;
}