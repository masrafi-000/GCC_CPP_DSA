#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    Node *root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            parent->left = new Node(l);
            q.push(parent->left);
        }

        if (r != -1)
        {
            parent->right = new Node(r);
            q.push(parent->right);
        }
    }

    return root;
}

void pirnt_level(Node *root, int target_level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    int current_level = 0;
    vector<int> level_nodes;

    while (!q.empty())
    {
        pair<Node *, int> current = q.front();
        q.pop();

        Node *node = current.first;
        int level = current.second;

        if (level == target_level)
            level_nodes.push_back(node->data);

        if (level > target_level)
            break;

        if (node->left != NULL)
            q.push({node->left, level + 1});

        if (node->right != NULL)
            q.push({node->right, level + 1});
    }

    if (level_nodes.empty())
    {
        cout << "Invalid" << endl;
        return;
    }

    for (int value : level_nodes)
    {
        cout << value << " ";
    }

    cout << endl;
}

int main()
{
    Node *root = input_tree();

    int level;
    cin >> level;

    pirnt_level(root, level);

    return 0;
}