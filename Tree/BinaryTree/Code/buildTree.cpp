#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree() {
    int val;
    cin >> val;

    if (val == -1) return NULL;

    TreeNode* node = new TreeNode(val);

    cout << "Enter left child of " << val << ": ";
    node->left = buildTree();

    cout << "Enter right child of " << val << ": ";
    node->right = buildTree();

    return node;
}

void inorder(TreeNode* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    cout << "Enter tree nodes in pre-order (-1 for NULL): " << endl;

    TreeNode* root = buildTree();

    cout << "Inorder Traversal of the Tree: ";
    inorder(root);
    cout << endl;

    return 0;
}
