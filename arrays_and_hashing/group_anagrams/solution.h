#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        
    }

    std::vector<std::vector<std::string>> myGroupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<int, std::vector<std::string>> myMap;
        for (const std::string& str : strs) {
            myMap[contentHash(str)].push_back(str);
        }
        std::vector<std::vector<std::string>> lists;
        int x = 0;
        for (std::pair<int, std::vector<std::string>> p : myMap) {
            x++;
            lists.push_back(p.second);
        }
        std::cout << x << std::endl;
        return lists;
    }

    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false;
        std::unordered_map<char, int> sFreq, tFreq;
        for (unsigned i = 0; i < s.size(); i++) {
            sFreq[s[i]]++;
            tFreq[t[i]]++;
        }
        return sFreq == tFreq;
    }

    int contentHash(std::string s) {
        int h = 0;
        for (char& c : s) {
            h += static_cast<int>(c);
        }
        std::cout << h << std::endl;
        return h;
    }
};