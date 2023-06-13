#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> st;

        if (root == NULL)
            return ans;

        while (root || !st.empty())
        {
            if (root)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                TreeNode *temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                root = temp->right;
            }
        }
        return ans;
    }
};