#pragma once
#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        s = removeNonAlpha(s);
        int i = 0, j = (s.size() - 1);
        while (i < j) {
            if (s[i] != s[j])
            return false;
            i++;
            j--;
        }
        return true;
    }

    std::string removeNonAlpha(const std::string& s) {
        std::string str = "";
        for (char c : s) {
            if (isAlpha(c)) {
                if (isCapital(c)) {
                    c += 32;
                }
                str += c;
            }
        }
        return str;
    }

    bool isAlpha(char c) {
        return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || (c >= 48 && c <= 57);
    }

    bool isCapital(char c) {
        return ('A' <= c && c <= 'Z');
    }
};