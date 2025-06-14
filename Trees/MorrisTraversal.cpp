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

vector<int> morrisPostOrderTraversal(TreeNode* root){
   // Left -> Right -> Node => Modified to reverse(Node -> Right -> left)
    vector<int> result;
    while (root)
    {
        if(root->right == nullptr){
            result.push_back(root->val);
            root = root->left;
        }else{
            TreeNode* current = root->right;
            while (current->left && current->left != root) {
                current = current->left;
            }

            if(current->left == nullptr){
                result.push_back(root->val);
                current->left = root;
                root = root->right;
            }else{
                current->left = nullptr;
                root = root->left;
            }
        
        }
    }
    reverse(result.begin(), result.end());  // Reverse the vector in-place

    return result;
    
}

vector<int> morrisPreOrderTraversal(TreeNode* root){
    // Node Left Right
    vector<int> result;
    while(root){
        if(root->left == nullptr){
            result.push_back(root->val);
            root = root->right;
        }else{
            TreeNode* current = root->left;
            while (current->right && current->right != root) {
                current = current->right;
            }

            if(current->right == nullptr){
                result.push_back(root->val);
                current->right = root;
                root = root->left;
            }else{
                current->right = nullptr;
                root = root->right;
            }
            
        }
    }

    return result;

}
 
vector<int> morrisInorderTraversal(TreeNode* root) {
    //Left
    //Root
    //Right
    vector<int> result;
    
    while (root) {
        if (!root->left) {
            result.push_back(root->val);
            root = root->right;
        } else {

            TreeNode* current = root->left;
            
            while (current->right && current->right != root) {
                current = current->right;
            }
            

            if (!current->right) {
                current->right = root; // Make a thread
                root = root->left;
            } else {
                current->right = NULL; // Remove the thread
                result.push_back(root->val);
                root = root->right;
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

   vector<int> result1;
   result1 = morrisPreOrderTraversal(root);
    cout << "Morris PreOrder Traversal: ";
   for (int val : result1) {
       cout << val << " ";
   }
   cout << endl;

    vector<int> result2;
   result2 = morrisPreOrderTraversal(root);
    cout << "Morris PostOrder Traversal: ";
   for (int val : result2) {
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

