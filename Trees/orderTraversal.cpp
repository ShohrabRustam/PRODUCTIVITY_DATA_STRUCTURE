#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorderTraversalLNR(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;
    if(root->val == -1) return; // Handle case for NULL nodes

    inorderTraversalLNR(root->left,result);
    result.push_back(root->val);
    inorderTraversalLNR(root->right,result);
    return;
}

void preorderTraversalNLR(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;

    if(root->val == -1) return; // Handle case for NULL nodes

    result.push_back(root->val);

    preorderTraversalNLR(root->left,result);    // L (Left)
    preorderTraversalNLR(root->right,result);   // R (Right)
}

void postorderTraversalLRN(TreeNode* root, vector<int>& result) {
    if (root == NULL ) return;
    if(root->val == -1) return; // Handle case for NULL nodes

    postorderTraversalLRN(root->left,result);
    postorderTraversalLRN(root->right,result);
    result.push_back(root->val);
}

TreeNode* buildTreeLR() {
    int x;
    cin >> x;
    if(x == -1) return NULL;
    TreeNode* temp = new TreeNode(x);

    cout << "Enter left child of " << x << " (-1 for NULL): ";
    temp->left = buildTreeLR();
    cout << "Enter right child of " << x << " (-1 for NULL): ";
    temp->right = buildTreeLR();
    return temp;

}
void deleteTree(TreeNode* node) {
    if (!node) return;
    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}
int main(int argc, const char** argv) {
    cout<<"Enter root value: ";
   TreeNode* root = buildTreeLR();
   vector<int> result;
   inorderTraversalLNR(root, result);
   cout << "Inorder Traversal (LNR): ";
   for (int val : result) {
       cout << val << " ";
   }
   vector<int> result2;
   preorderTraversalNLR(root, result2);
   cout << "\nPreorder Traversal (NLR): ";
   for (int val : result2) {
       cout << val << " ";
   }
   cout << endl;
   vector<int> result3;
   postorderTraversalLRN(root, result3);
   cout << "\nPostorder Traversal (LRN): ";
   for (int val : result3) {
       cout << val << " ";
   }
   cout << endl;

    // Clean up the tree to avoid memory leaks
    deleteTree(root);
    
    cout << endl;
    cout << "Tree Traversals Completed." << endl;
    cout << endl;
    return 0;
}

