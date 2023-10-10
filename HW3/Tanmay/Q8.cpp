#include <iostream>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false; // Sanity check if lengths of strings don't match
        }

        std::vector<int> charCount(26, 0); // Assuming lowercase English letters

        // Count the frequency of characters in string `s`
        for (char c : s) {
            charCount[c - 'a']++;
        }

        // Decrement the count for characters in string `t`
        for (char c : t) {
            charCount[c - 'a']--;
        }

        // Check if all character counts are zero
        for (int count : charCount) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    // Instantiate `Solution` object
    Solution solution;
    
    // Test 1
    std::string s1 = "anagram";
    std::string t1 = "nagaram";
    std::cout << "Test 1: " << solution.isAnagram(s1, t1) << std::endl;
    
    // Test 2
    std::string s2 = "rat";
    std::string t2 = "car";
    std::cout << "Test 2: " << solution.isAnagram(s2, t2) << std::endl;

    return 0;
}
