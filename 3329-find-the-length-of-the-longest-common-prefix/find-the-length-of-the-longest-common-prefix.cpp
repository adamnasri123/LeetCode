class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> prefixSet;

        // Step A: store all prefixes from arr1
        for (int num : arr1) {
            string s = to_string(num);
            for (int i = 1; i <= s.size(); i++) {
                prefixSet.insert(s.substr(0, i));
            }
        }

        // Step B: check prefixes from arr2
        int result = 0;
        for (int num : arr2) {
            string s = to_string(num);
            for (int i = 1; i <= s.size(); i++) {
                if (prefixSet.count(s.substr(0, i))) {
                    result = max(result, i);
                }
            }
        }

        return result;
    }
};