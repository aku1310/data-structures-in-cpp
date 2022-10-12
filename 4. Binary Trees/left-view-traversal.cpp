#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
};

void recursion(TreeNode *root, int level, vector<int> &res)
{
    if (root == NULL)
        return;
    if (res.size() == level)
        res.push_back(root->data);
    recursion(root->left, level + 1, res);
    recursion(root->right, level + 1, res);
    // right first then left in recursion, in case of right side view
}

vector<int> leftSideView(TreeNode *root)
{
    vector<int> res;
    recursion(root, 0, res);
    return res;
}
