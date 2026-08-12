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
    {
        return NULL;
    }

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

int sum_non_leaf(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    int l = sum_non_leaf(root->left);
    int r = sum_non_leaf(root->right);

    int sum = root->data + l + r;
    return sum;
}

int main()
{
    Node *root = input_tree();
    int sum = sum_non_leaf(root);

    cout << sum << endl;

    return 0;
}