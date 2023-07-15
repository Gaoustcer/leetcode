/**
Definition for a binary tree node.
*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int record = 0;
class Solution {
public:
    int distributeCoins(TreeNode* root) {
        
    }
    void visit(TreeNode* t){
        if(t == nullptr){
            return;
        }
        else{
            
        }
    }
};