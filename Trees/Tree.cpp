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

TreeNode* buildTree(){
    int rootVal;
    cout << "Enter root value: ";
    cin >> rootVal;

    if (rootVal == -1) return NULL;

    TreeNode* root = new TreeNode(rootVal);
    queue<TreeNode*> q;
    q.push(root);

    // build the tree level by level
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        int leftVal, rightVal;
        cout << "Enter left child of " << current->val << " (-1 for NULL): ";
        cin >> leftVal;

        if (leftVal != -1) {
            current->left = new TreeNode(leftVal);
            q.push(current->left);
        }

        cout << "Enter right child of " << current->val << " (-1 for NULL): ";
        cin >> rightVal;

        if (rightVal != -1) {
            current->right = new TreeNode(rightVal);
            q.push(current->right);
        }
    }

    return root;
}

int main () {
    TreeNode* root = buildTree();

    if (root) {
        cout << "Root of the tree is: " << root->val << endl;
    } else {
        cout << "Tree is empty." << endl;
    }

    return 0;
}