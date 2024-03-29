#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

vector<vector<int>> findVertical(node *root)
{
    map<int, map<int, multiset<int>>> nodes;

    queue<pair<node *, pair<int, int>>> todo;
    todo.push({root,
               {0,
                0}});
                
    while (!todo.empty())
    {
        auto p = todo.front();
        todo.pop();
        node *temp = p.first;

        int x = p.second.first, y = p.second.second;
        nodes[x][y].insert(temp->data);

        if (temp->left)
        {
            todo.push({temp->left,
                       {x - 1,
                        y + 1}});
        }
        if (temp->right)
        {
            todo.push({temp->right,
                       {x + 1,
                        y + 1}});
        }
    }
    vector<vector<int>> ans;
    for (auto p : nodes)
    {
        vector<int> col;
        for (auto q : p.second)
        {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}
