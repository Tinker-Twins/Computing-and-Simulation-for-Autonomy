#include <iostream>

using namespace std; // Include the "std" namespace

// Definition for a binary tree node
struct TreeNode {
    int val; // Value
    TreeNode* left; // Left branch
    TreeNode* right; // Right branch
    TreeNode(int x) : val(x), left(NULL), right(NULL) {} // Constructor
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (!root) {
            return false; // Empty tree
        }

        // Check if it's a leaf node and if the current sum equals the target sum
        if (!root->left && !root->right && root->val == sum) {
            return true;
        }

        // Recursively check the left and right subtrees with updated sum
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};

int main() {
    // Given binary tree
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->right = new TreeNode(1);

    Solution solution; // Instantiate `Solution` object
    int sum = 22; // Target sum
    bool result = solution.hasPathSum(root, sum); // Result
    
    // Print result
    if (result) {
        cout << "The tree has a root-to-leaf path with sum " << sum << ".\n";
    } else {
        cout << "No such path found.\n";
    }

    // Clean up the dynamically allocated memory (delete the leaf nodes first)
    delete root->left->left->left;
    delete root->left->left->right;
    delete root->right->right->right;
    delete root->left->left;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
