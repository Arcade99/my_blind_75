#pragma once
#include <vector>
#include <string>

class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    std::string encode(std::vector<std::string> &strs) {
        std::string encoded = "";
        for (auto s : strs) {
            encoded += (s + "|;");
        }
        return encoded;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    std::vector<std::string> decode(std::string &str) {
        std::vector<std::string> v;
        size_t pos = 0;
        const int delimeter_length = 2;
        std::string token = "";
        while ((pos = str.find("|;")) != std::string::npos) {
            token = str.substr(0, pos);
            v.push_back(token);
            str.erase(0, pos + delimeter_length);
        }
        return v;
    }
};