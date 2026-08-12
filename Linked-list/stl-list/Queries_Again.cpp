#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node*& head, Node*& tail, int val)
{
    Node* newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node*& head, Node*& tail, int val)
{
    Node* newNode = new Node(val);

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

bool insert_at_pos(Node*& head, Node*& tail, int idx, int val)
{
    if (head == NULL)
    {
        if (idx != 0)
            return false;

        insert_at_head(head, tail, val);
        return true;
    }

    if (idx == 0)
    {
        insert_at_head(head, tail, val);
        return true;
    }

    Node* temp = head;

    for (int i = 1; i < idx; i++)
    {
        if (temp->next == NULL)
            return false;

        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        insert_at_tail(head, tail, val);
        return true;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
    temp->next = newNode;

    return true;
}

void print_list_forward(Node* head)
{
    cout << "L -> ";

    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_list_backward(Node* tail)
{
    cout << "R -> ";

    Node* temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;

    while (t--)
    {
        int idx, val;
        cin >> idx >> val;

        if (!insert_at_pos(head, tail, idx, val))
        {
            cout << "Invalid" << endl;
            continue;
        }

        print_list_forward(head);
        print_list_backward(tail);
    }

    return 0;
}