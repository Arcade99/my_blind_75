#include <iostream>
#include "solution.h"
#include <vector>

int main() {
    Solution solution;
    //["eat","tea","tan","ate","nat","bat"]
    std::vector<std::string> v = {"eat","tea","tan","ate","nat","bat"};
    solution.groupAnagrams(v);
    return 0;
}