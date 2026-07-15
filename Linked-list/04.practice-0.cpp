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

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insertAtHead(head, val);

        if (tail == NULL)
        {
            tail = head;
        }

        return;
    }

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;

    cout << "Initial List: ";
    display(head);

    cout << "Size of the list: " << size(head) << endl;

    insertAtHead(head, 5);
    cout << "After inserting 5 at head: ";
    display(head);

    // Insert at Tail
    insertAtTail(head, third, 40);
    cout << "After Insert at Tail: ";
    display(head);

    insertAtPosition(head, third, 2, 15);
    cout << "After Insert at Position 2: ";
    display(head);

    cout << "Final Size of the list: " << size(head) << endl;

    return 0;
}