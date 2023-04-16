#pragma once
#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> freqMap; // replacing with std::map yields better memory results, but worse run-time
        for (int& i : nums) {
            freqMap[i]++;
        }
        
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, myComparator> pq;
        for (auto& p : freqMap) {
            pq.emplace(p);
        }

        std::vector<int> results;
        results.reserve(k);
        for (unsigned i = 0; i < k; i++) {
            results.emplace_back((pq.top()).first);
            pq.pop();
        }
        return results;
    }

    struct myComparator {
        bool operator()(const std::pair<int, int>& l, const std::pair<int, int>& r) const {
            return l.second < r.second;
        }
    };
};