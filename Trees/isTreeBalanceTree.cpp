#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

   int sizeOfTree(TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);

   }


   int isTreeHeight(TreeNode* root, bool &isBalance) {
    if (root == NULL) return 0;

    int leftHeight = isTreeHeight(root->left, isBalance);
    if(isBalance){
        int rightHeight = isTreeHeight(root->right, isBalance);
        // Check if the current node is balanced
        if (abs(leftHeight - rightHeight) > 1) {
            isBalance = false; // Mark as unbalanced
        }
        return max(leftHeight, rightHeight) + 1;
    }
    return -1; // If the right subtree is not checked, return left height
   }

   bool  isTreeBalaced(TreeNode* root) {
    if (root == NULL) return true;
    bool isBalance = true;
    int leftHeight = isTreeHeight(root->left, isBalance);
    int rightHeight = isTreeHeight(root->right, isBalance);
    if (isBalance) {
        return false; // If any subtree is unbalanced, the tree is unbalanced
    }
    return abs(leftHeight - rightHeight) <= 1;

   }


   int countLeafNodes(TreeNode* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1; // Leaf node
    return countLeafNodes(root->left) + countLeafNodes(root->right);
   }

   int heightOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        int leftHeight = heightOfBinaryTree(root->left);
        int rightHeight = heightOfBinaryTree(root->right);
        return max(leftHeight, rightHeight) + 1;
   }

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

void levelOrderTraversal(TreeNode* root, vector<int>& result) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current->val != -1) { // Only add non-NULL values
            result.push_back(current->val);
        }

        if (current->left) 
            q.push(current->left);
        if (current->right) 
            q.push(current->right);
    }
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

    vector<int> levelOrderResult;
    levelOrderTraversal(root, levelOrderResult);
    cout << "\nLevel Order Traversal: ";
    for (int val : levelOrderResult) {
        cout << val << " ";
    }
    cout << endl;

    cout << "\nSize of the tree: " << sizeOfTree(root) << endl;

    cout << "Number of Leaf Nodes: " << countLeafNodes(root) << endl;

    cout << "Height of the Binary Tree: " << heightOfBinaryTree(root) << endl;
    
    cout << "Is the tree balanced? " << (isTreeBalaced(root) ? "Yes" : "No") << endl;

    // Clean up the tree to avoid memory leaks
    deleteTree(root);
    
    cout << endl;
    cout << "Tree¯¸ Traversals Completed." << endl;
    cout << endl;
    return 0;
}

