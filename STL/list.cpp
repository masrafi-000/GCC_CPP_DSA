#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, tail1, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head2, tail2, val);
    }

    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            cout << "NO";
            return 0;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == NULL && temp2 == NULL)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}