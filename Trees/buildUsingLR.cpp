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
int main(int argc, const char** argv) {
    cout<<"Enter root value: ";
   TreeNode* root = buildTreeLR();
    return 0;
}