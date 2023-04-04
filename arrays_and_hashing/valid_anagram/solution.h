#pragma once
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false;
        std::unordered_map<char, int> sFreq, tFreq;
        for (unsigned i = 0; i < s.size(); i++) {
            sFreq[s[i]]++;
            tFreq[t[i]]++;
        }
        return sFreq == tFreq;
    }
};