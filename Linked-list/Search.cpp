#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
    tail = newNode;
}

void search_linked_list(Node *head, int n)
{
    Node *temp = head;
    int index = 0;

    while (temp != NULL)
    {
        if (temp->data == n)
        {
            cout << index << endl;
            return;
        }
        temp = temp->next;
        index++;
    }

    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (true)
        {
            cin >> val;

            if (val == -1)
            {
                break;
            }

            insert_at_tail(head, tail, val);
        }

        int n;
        cin >> n;

        search_linked_list(head, n);
    }

    return 0;
}