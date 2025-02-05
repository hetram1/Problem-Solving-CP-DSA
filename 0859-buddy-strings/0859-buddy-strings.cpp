class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // Check if the strings have different lengths, they can't be buddy strings in this case.
        if (s.size() != goal.size()) {
            return false;
        }

        // If the strings are already equal, we need at least one duplicate character to swap
        if (s == goal) {
            for (int i = 0; i < s.size(); i++) {
                for (int j = i + 1; j < s.size(); j++) {
                    if (s[i] == s[j]) {
                        return true;
                    }
                }
            }
            return false;
        }

        // Find the indices where the strings differ
        vector<int> diffIndices;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                diffIndices.push_back(i);
            }
        }

        // If there are exactly two positions where they differ, swap and check if the strings are equal
        if (diffIndices.size() == 2) {
            swap(s[diffIndices[0]], s[diffIndices[1]]);
            return s == goal;
        }

        return false;
    }

};