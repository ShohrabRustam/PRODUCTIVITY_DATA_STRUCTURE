#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Inorder Traversal
void inorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;
    inorder(root->left, result);
    result.push_back(root->val);
    inorder(root->right, result);
}

// Preorder Traversal
void preorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;
    result.push_back(root->val);
    preorder(root->left, result);
    preorder(root->right, result);
}

// Postorder Traversal
void postorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;
    postorder(root->left, result);
    postorder(root->right, result);
    result.push_back(root->val);
}

// Level Order Traversal
vector<int> levelOrder(TreeNode* root) {
    vector<int> result;
    if (root == NULL) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        result.push_back(node->val);

        if (node->left != NULL) q.push(node->left);
        if (node->right != NULL) q.push(node->right);
    }
    return result;
}

int main() {
    // Example Tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int> inorderResult, preorderResult, postorderResult, levelOrderResult;

    inorder(root, inorderResult);
    preorder(root, preorderResult);
    postorder(root, postorderResult);
    levelOrderResult = levelOrder(root);

    cout << "Inorder Traversal: ";
    for (int val : inorderResult) cout << val << " ";
    cout << endl;

    cout << "Preorder Traversal: ";
    for (int val : preorderResult) cout << val << " ";
    cout << endl;

    cout << "Postorder Traversal: ";
    for (int val : postorderResult) cout << val << " ";
    cout << endl;

    cout << "Level Order Traversal: ";
    for (int val : levelOrderResult) cout << val << " ";
    cout << endl;

    return 0;
}
