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

bool is_perfect_binary_tree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    int leaf_depth = -1;

    while (!q.empty())
    {
        pair<Node *, int> current = q.front();
        q.pop();

        Node *node = current.first;
        int depth = current.second;

        if (node->left == NULL && node->right == NULL)
        {
            if (leaf_depth == -1)
            {
                leaf_depth = depth;
            }
            else if (leaf_depth != depth)
            {
                return false;
            }

            continue;
        }

        if (node->left == NULL || node->right == NULL)
            return false;

        q.push({node->left, depth + 1});
        q.push({node->right, depth + 1});
    }

    return true;
}

int main()
{
    Node *root = input_tree();

    if (is_perfect_binary_tree(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}