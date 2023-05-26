#pragma once
#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int i = 0, j = (s.size() - 1);
        while (i < j) {
            while (i < j && !isAlphaNumeric(s[i])) {
                i++;
            }
            while (i < j && !isAlphaNumeric(s[j])) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool isAlphaNumeric(char c) {
        return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || (c >= '0' && c <= '9');
    }

    bool isCapital(char c) {
        return ('A' <= c && c <= 'Z');
    }
};