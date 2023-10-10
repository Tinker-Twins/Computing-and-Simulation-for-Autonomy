#include <iostream>
#include <algorithm>

using namespace std; // Include the "std" namespace

// Definition for binary tree
class TreeNode {
public:
    int val; // Value
    TreeNode* left; // Left branch
    TreeNode* right; // Right branch
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} // Constructor
};

int maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0; // An empty tree has depth = 0
    } else {
        int leftDepth = maxDepth(root->left);   // Depth of left subtree
        int rightDepth = maxDepth(root->right); // Depth of right subtree
        return max(leftDepth, rightDepth) + 1; // Add 1 for the current node
    }
}

int main() {
    // Given binary tree
    TreeNode* a15 = new TreeNode(15);
    TreeNode* a7 = new TreeNode(7);
    TreeNode* a20 = new TreeNode(20);
    TreeNode* a9 = new TreeNode(9);
    TreeNode* a3 = new TreeNode(3);
    a20->left = a15;
    a20->right = a7;
    a3->left = a9;
    a3->right = a20;
    
    // Find and print the maximum depth of the binary tree
    cout << maxDepth(a3) << endl;
    
    return 0;
}
