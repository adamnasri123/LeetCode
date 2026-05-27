class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        // key = number we saw
        // value = position we saw it at

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];   // what number do I need?

            if (seen.count(need)) {        // have I seen it before?
                return {seen[need], i};    // yes! return both positions
            }

            seen[nums[i]] = i;            // haven't found a pair yet
                                           // save this number and its position
        }
        return {};
    }
};