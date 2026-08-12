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

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void level_order(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left != NULL)
            q.push(temp->left);

        if (temp->right != NULL)
            q.push(temp->right);
    }
}

int sum_of_left_leaves(Node* root) {
    if(root == NULL) return 0;

    int sum = 0;

    if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
        sum += root->left->data;
    }

    sum += sum_of_left_leaves(root->left);
    sum += sum_of_left_leaves(root->right);

    return sum;
}

int max_depth(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int left_depth = max_depth(root->left);
    int right_depth = max_depth(root->right);

    return max(left_depth, right_depth) +1;
}

Node *input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    Node* root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int l, r;

        cin >> l >> r;

        if (l != -1)
        {
            temp->left = new Node(l);
            q.push(temp->left);
        }

        if (r != -1)
        {
            temp->right = new Node(r);
            q.push(temp->right);
        }
    }
    return root;
}

int main()
{

    // Node* root = new Node(1);
    // Node* a = new Node(2);
    // Node* b = new Node(3);
    // Node* c = new Node(4);
    // Node* d = new Node(5);
    // Node* e = new Node(6);

    // root->left = a;
    // root->right = b;
    // a->left = c;
    // a->right= d;
    // b->right =e;

    Node *root = input_tree();

    cout << "Preorder-->" << endl;
    preorder(root);
    cout << endl;

    cout << "Inorder-->" << endl;
    inorder(root);
    cout << endl;

    cout << "Postorder-->" << endl;
    postorder(root);

    cout << endl
         << "Level Order-->" << endl;
    level_order(root);


    cout << endl << "Sum of left leaf node"<< endl;
    sum_of_left_leaves(root);

    return 0;
}