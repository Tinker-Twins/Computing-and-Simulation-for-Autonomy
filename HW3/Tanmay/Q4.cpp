#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std; // Include the "std" namespace

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charIndex(128, -1); // Stores the last seen index of each character
        int maxLength = 0; // Initialize `maxLength`
        int start = 0; // Starting index of the current substring

        for (int end = 0; end < s.length(); ++end) {
            // If the current character has been seen before and its last seen index
            // is greater than or equal to the start index of the current substring
            if (charIndex[s[end]] >= start) {
                // Update start index to the next position after last occurrence of the character
                start = charIndex[s[end]] + 1;
            }

            // Update the last seen index of the current character
            charIndex[s[end]] = end;

            int currentLength = end - start + 1; // Calculate length of the current substring
            maxLength = max(maxLength, currentLength); // Update the maximum length
        }

        return maxLength; // Return the result
    }
};

int main() {
    // Given string
    string s = "abcabcbb";
    // Instantiate `Solution` object
    Solution solution;
    // Find substring of maximum length
    int result = solution.lengthOfLongestSubstring(s);
    // Print result
    cout << "Length of the longest substring without repeating characters: " << result << endl;
    return 0;
}
