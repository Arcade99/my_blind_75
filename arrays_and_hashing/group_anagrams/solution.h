#pragma once
#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagram_groups;
        for (const std::string& s : strs) {
            anagram_groups[myHash(s)].push_back(s);
        }

        std::vector<std::vector<std::string>> result;
        for (auto& p : anagram_groups) {
            result.push_back(p.second);
        }

        return result;
    }

    std::string myHash(const std::string& s) {
        std::vector<int> t(26, 0);
        for (const char& c : s) {
            t[c - 'a']++;
        }
        std::string str = "";
        for (unsigned i = 0; i < 26; i++) {
            str += std::to_string(t[i]) + ',';
        }
        return str;
    }
};