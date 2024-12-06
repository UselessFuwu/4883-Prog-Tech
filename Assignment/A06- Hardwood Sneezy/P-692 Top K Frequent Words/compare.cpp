#include <algorithm>
#include <map>
class Solution {
public:
    static bool compare(const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second) // compares frequencies
            return a.first <
                   b.first; // sorts alphabetically if frequencies are the same
        return a.second >
               b.second; // sorts frequency in descending order otherwise
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> map;

        for (const string& word : words) {
            map[word]++; // counts frequencies of words
        }

        vector<pair<string, int>> vecPair; // make vector of pairs

        for (const auto& entry : map)
            vecPair.push_back(entry); // stores pair in vecPair

        sort(vecPair.begin(), vecPair.end(), compare); // sorts vecPair

        for (const auto& entry : vecPair)
            cout << entry.first << ": " << entry.second
                 << endl; // couts the pair first

        vector<string> results;
        for(int i = 0; i < k; i++)
            results.push_back(vecPair[i].first); // adds word to frequency
        
        return results;
    }
};
