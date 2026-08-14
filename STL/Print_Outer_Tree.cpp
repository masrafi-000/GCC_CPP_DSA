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

void print_ourter_part(Node *root)
{
    vector<int> left_part;
    vector<int> right_part;

    Node *current = root->left;

    while (current)
    {
        left_part.push_back(current->data);

        if (current->left)
            current = current->left;
        else
            current = current->right;
    }

    reverse(left_part.begin(), left_part.end());

    current = root->right;

    while (current)
    {
        right_part.push_back(current->data);

        if (current->right)
            current = current->right;
        else
            current = current->left;
    }

    for (int i : left_part)
    {
        cout << i << " ";
    }

    cout << root->data << " ";
    for (int i : right_part)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    Node *root = input_tree();
    print_ourter_part(root);
    return 0;
}