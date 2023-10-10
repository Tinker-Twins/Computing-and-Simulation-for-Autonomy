#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std; // Include the "std" namespace

vector<int> solution(const vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Stores numbers and their indices
    vector<int> result; // Initialize result
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // Find complement (difference between target and current element)
        
        // Check if the complement exists in the map
        if (numMap.find(complement) != numMap.end()) { // Solution found
            result.push_back(numMap[complement]); // Index of complement 
            result.push_back(i); // Index of current element
            return result; // Return solution
        }
        
        // Add the current number to the map
        numMap[nums[i]] = i;
    }
    return result; // Return empty vector
}

int main() {
    vector<int> numbers = {0, 21, 78, 19, 90, 13};  // Given vector
    
    vector<int> result1 = solution(numbers, 21);  // Find target 1
    vector<int> result2 = solution(numbers, 25);  // Find target 2
    
    if (!result1.empty()) {
        cout << "Solution 1: a = " << numbers[result1[0]] << ", b = " << numbers[result1[1]] << endl; // Print solution
    }
    else {
    	cout << "Solution 1: No solution found." << endl; // No solution found
    }
    
    if (!result2.empty()) {
        cout << "Solution 2: a = " << numbers[result2[0]] << ", b = " << numbers[result2[1]] << endl; // Print solution
    }
    else {
    	cout << "Solution 2: No solution found." << endl; // No solution found
    }
    
    return 0;
}
