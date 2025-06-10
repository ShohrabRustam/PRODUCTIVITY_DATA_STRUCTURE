#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> leftView(TreeNode* root) {
    vector<int> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        
        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();

            if (i == 0) {
                result.push_back(node->val);
            }

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    return result;
}

bool isCousin(TreeNode* root, int x, int y) {
    if (!root) return false;

    queue<TreeNode*> q;
    q.push(root);
    bool foundX = false, foundY = false;

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();

            if (node->val == x) foundX = true;
            if (node->val == y) foundY = true;

            if (node->left && node->right) {
                if ((node->left->val == x && node->right->val == y) ||
                    (node->left->val == y && node->right->val == x)) {
                    return false; // siblings
                }
            }

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        if (foundX && foundY) return true; // both found at the same level
        if (foundX || foundY) return false; // one of them found, but not both
    }
    return false; // not cousins
}

   int sizeOfTree(TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);

   }


void inorderTraversalLNR(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;
    if(root->val == -1) return; // Handle case for NULL nodes

    inorderTraversalLNR(root->left,result);
    result.push_back(root->val);
    inorderTraversalLNR(root->right,result);
    return;
}

void spiralTraversal(TreeNode *root, vector<int>& result){
    if (!root) return;
    stack<TreeNode*> leftToRight;
    stack<TreeNode*> rightToLeft;
    leftToRight.push(root);
    while(leftToRight.empty()== false || rightToLeft.empty() == false){
        if(!leftToRight.empty()){
            TreeNode* node = leftToRight.top();
            leftToRight.pop();
            result.push_back(node->val);
            if(node->left) rightToLeft.push(node->left);
            if(node->right) rightToLeft.push(node->right);
        }else if(!rightToLeft.empty()){
            TreeNode* node = rightToLeft.top();
            rightToLeft.pop();
            result.push_back(node->val);
            if(node->right) leftToRight.push(node->right);
            if(node->left) leftToRight.push(node->left);
        }
    }
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

    vector<int> spiralResult;
    spiralTraversal(root, spiralResult);
    cout << "\nSpiral Traversal: ";
    for (int val : spiralResult) {
        cout << val << " ";
    }
    cout << endl;

    cout << "\nEnter two values to check if they are cousins: ";
    int x, y;
    cin >> x >> y;
    if (isCousin(root, x, y)) {
        cout << x << " and " << y << " are cousins." << endl;
    } else {
        cout << x << " and " << y << " are not cousins." << endl;
    }

    vector<int> leftViewResult = leftView(root);
    cout << "\nLeft View of the Tree: ";
    for (int val : leftViewResult) {
        cout << val << " ";
    }
    cout << endl;

    // Clean up the tree to avoid memory leaks
    deleteTree(root);
    
    cout << endl;
    cout << "Tree¯¸ Traversals Completed." << endl;
    cout << endl;
    return 0;
}

