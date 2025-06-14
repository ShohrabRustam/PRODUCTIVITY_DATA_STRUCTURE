#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

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
 
vector<int> morrisInorderTraversal(TreeNode* root) {
    vector<int> result;
    TreeNode* current = root;
    
    while (current) {
        if (!current->left) {
            result.push_back(current->val);
            current = current->right;
        } else {
            TreeNode* pre = current->left;
            
            while (pre->right && pre->right != current) {
                pre = pre->right;
            }
            

            if (!pre->right) {
                pre->right = current; // Make a thread
                current = current->left;
            } else {
                pre->right = NULL; // Remove the thread
                result.push_back(current->val);
                current = current->right;
            }
        }
    }
    
    return result;
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
   result = morrisInorderTraversal(root);
   cout << "Morris Inorder Traversal: ";
   for (int val : result) {
       cout << val << " ";
   }
   cout << endl;
   // Note: Morris Traversal does not require a separate preorder or postorder implementation
    // Clean up the tree to avoid memory leaks
    deleteTree(root);
    
    cout << endl;
    cout << "Tree¯¸ Traversals Completed." << endl;
    cout << endl;
    return 0;
}

