#include <bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    map<int, int> mpp;
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<TreeNode<int>*,int>temp=q.front();
        // auto it = q.front();
        q.pop();
        TreeNode<int> *node = temp.first;
        int line = temp.second;
        if (mpp.find(line) == mpp.end())
        {
            mpp[line] = node->data;
        }
        if (node->left)
        {
            q.push({node->left, line - 1});
        }
        if (node->right)
        {
            q.push({node->right, line + 1});
        }
    }
    for (auto it : mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}