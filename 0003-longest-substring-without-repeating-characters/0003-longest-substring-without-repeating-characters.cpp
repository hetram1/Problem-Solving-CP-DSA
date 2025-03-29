class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set; // To store unique characters
        int left = 0, maxLength = 0;

        for (int right = 0; right < s.size(); right++) {
            // If character already exists in the set, remove from left until unique
            while (set.find(s[right]) != set.end()) {
                set.erase(s[left]);
                left++;
            }

            // Add current character to set and update maxLength
            set.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};