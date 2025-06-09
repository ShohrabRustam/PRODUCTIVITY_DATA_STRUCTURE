#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> st;
    TreeNode* current = root;

    while (current != NULL || !st.empty()) {
        while (current != NULL) {
            st.push(current);
            current = current->left;
        }
        current = st.top(); 
        st.pop();
        result.push_back(current->val);
        current = current->right;
    }
    return result;
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    if (root == NULL) return result;

    stack<TreeNode*> st;
    st.push(root);

    while (!st.empty()) {
        TreeNode* node = st.top(); st.pop();
        result.push_back(node->val);

        if (node->right != NULL) st.push(node->right);
        if (node->left != NULL) st.push(node->left);
    }
    return result;
}

vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    if (root == NULL) return result;

    stack<TreeNode*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        TreeNode* node = st1.top(); st1.pop();
        st2.push(node);

        if (node->left != NULL) st1.push(node->left);
        if (node->right != NULL) st1.push(node->right);
    }

    while (!st2.empty()) {
        result.push_back(st2.top()->val);
        st2.pop();
    }
    return result;
}

vector<int> levelOrderTraversal(TreeNode* root) {
    vector<int> result;
    if (root == NULL) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front(); q.pop();
        result.push_back(node->val);

        if (node->left != NULL) q.push(node->left);
        if (node->right != NULL) q.push(node->right);
    }
    return result;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int> inorder = inorderTraversal(root);
    vector<int> preorder = preorderTraversal(root);
    vector<int> postorder = postorderTraversal(root);
    vector<int> levelOrder = levelOrderTraversal(root);

    cout << "Inorder Traversal: ";
    for (int val : inorder) cout << val << " ";
    cout << endl;

    cout << "Preorder Traversal: ";
    for (int val : preorder) cout << val << " ";
    cout << endl;

    cout << "Postorder Traversal: ";
    for (int val : postorder) cout << val << " ";
    cout << endl;

    cout << "Level Order Traversal: ";
    for (int val : levelOrder) cout << val << " ";
    cout << endl;

    return 0;
}
