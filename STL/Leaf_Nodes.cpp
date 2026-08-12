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

void get_leaf_nodes(Node *root, vector<int> &leaf)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        leaf.push_back(root->data);
        return;
    }

    get_leaf_nodes(root->left, leaf);
    get_leaf_nodes(root->right, leaf);
}

int main()
{
    Node *root = input_tree();

    vector<int> leaf;

    get_leaf_nodes(root, leaf);

    sort(leaf.begin(), leaf.end(), greater<int>());

    for (int i : leaf)
    {
        cout << i << " ";
    }

    return 0;
}