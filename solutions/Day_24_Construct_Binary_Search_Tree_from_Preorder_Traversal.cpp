//pprockys;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return solve(preorder, 0, preorder.size() - 1);
    }
    
    TreeNode* solve(vector<int>&pre, int i, int j) {
        if(i == j) {
            return new TreeNode(pre[i]);
        }
        if(i > j) return NULL;
        TreeNode *root = new TreeNode(pre[i]);
        int x = i;
        for(int k = i+1;k<=j;k++) {
            if(pre[k]<=pre[i]) {  
              x = k;
            }
            else break;
        }
        root->left = solve(pre, i + 1, x);
        root->right = solve(pre, x + 1, j);
        return root;
    }
};
