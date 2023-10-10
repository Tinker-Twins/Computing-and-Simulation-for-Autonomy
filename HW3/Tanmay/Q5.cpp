#include <iostream>
#include <stack>
#include <string>

using namespace std; // Include the "std" namespace

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // Stack to hold the given string
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);  // Push opening brackets onto the stack
            } else {
                if (st.empty()) {
                    return false;  // There is no corresponding opening bracket
                }
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                    return false;  // Mismatched closing bracket
                }
            }
        }
        
        return st.empty();  // If the stack is empty, all brackets are matched.
    }
};

int main() {
    
    // Test cases
    std::string test1 = "([{}])";
    std::string test2 = "()[]{}";
    std::string test3 = "([)]";
    std::string test4 = "{[}]";
    
    Solution solution; // Instantiate `Solution` object
    
    // Check and print results
    std::cout << "Result 1: " << (solution.isValid(test1) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Result 2: " << (solution.isValid(test2) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Result 3: " << (solution.isValid(test3) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Result 4: " << (solution.isValid(test4) ? "Valid" : "Invalid") << std::endl;
    
    return 0;
}
