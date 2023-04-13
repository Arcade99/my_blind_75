#pragma once
#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false;
        std::vector<int> charFreq(26, 0);
        for (unsigned i = 0; i < s.size(); i++) {
            charFreq[s[i] - 'a']++;
            charFreq[t[i] - 'a']--;
        }
        for (int count : charFreq) {
            if (count != 0) return false;
        }
        return true;
    }
};