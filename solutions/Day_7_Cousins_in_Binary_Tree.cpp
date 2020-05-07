//pprockys
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int level[101];
int par[101];
void dfs(TreeNode* root)
{
    if(root->left!=NULL)
    {
        level[root->left->val]=level[root->val]+1;
        par[root->left->val]=root->val;
        dfs(root->left);
    }
    if(root->right!=NULL)
    {
        level[root->right->val]=level[root->val]+1;
        par[root->right->val]=root->val;
        dfs(root->right);
    }
}

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        for(int i=0;i<101;i++)
        {
            par[i]=i;
            level[i]=0;
        }
        dfs(root);
        if(level[x]==level[y]&&par[x]!=par[y])
            return true;
        else return false;
    }
};
