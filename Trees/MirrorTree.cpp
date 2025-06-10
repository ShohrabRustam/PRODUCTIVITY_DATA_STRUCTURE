#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    bool isTreeIdentical(TreeNode* root1, TreeNode* root2) {
        // If both nodes are NULL, they are identical
        if (root1 == NULL && root2 == NULL) return true;
        
        // If one of the nodes is NULL, they are not identical
        if (root1 == NULL || root2 == NULL) return false;
        
        // Check if the current nodes have the same value and recursively check left and right subtrees
        return (root1->val == root2->val) &&
            isTreeIdentical(root1->left, root2->left) &&
            isTreeIdentical(root1->right, root2->right);
    }

    bool isTreeMirror(TreeNode* root1, TreeNode* root2) {
        // If both nodes are NULL, they are mirrors
        if (root1 == NULL && root2 == NULL) return true;
        
        // If one of the nodes is NULL, they are not mirrors
        if (root1 == NULL || root2 == NULL) return false;
        
        // Check if the current nodes have the same value and recursively check left and right subtrees in reverse order
        return (root1->val == root2->val) &&
            isTreeMirror(root1->left, root2->right) &&
            isTreeMirror(root1->right, root2->left);
    }

    void Mirror(TreeNode* root) {
        if (root == NULL) return;

        // Swap the left and right children
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // Recursively call Mirror on the left and right subtrees
        Mirror(root->left);
        Mirror(root->right);
    }

   int sizeOfTree(TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);

   }

   int countLeafNodes(TreeNode* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1; // Leaf node
    return countLeafNodes(root->left) + countLeafNodes(root->right);
   }
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            int maxVal = INT_MIN;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();

                maxVal = max(maxVal, node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            result.push_back(maxVal);
        }

        return result;
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

    vector<int> largestValuesResult = largestValues(root);
    cout << "Largest value in each level: ";
    for (int val : largestValuesResult) {
        cout << val << " ";
    }

    cout << endl;
      TreeNode* root2 = buildTreeLR();
    cout << "Is the tree identical ? " 
         << (isTreeIdentical(root, root2) ? "Yes" : "No") << endl;

    Mirror(root);
    cout << "Tree after mirroring: "<<endl;;       
    vector<int> mirroredResult;
    inorderTraversalLNR(root, mirroredResult);
    for (int val : mirroredResult) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Is the tree a mirror image of another tree? "
         << (isTreeMirror(root, root2) ? "Yes" : "No") << endl;

    // Clean up the tree to avoid memory leaks
    deleteTree(root);
    
    cout << endl;
    cout << "Tree¯¸ Traversals Completed." << endl;
    cout << endl;
    return 0;
}

