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

void userInput(Node *&head, Node *&tail)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        Node *newNode = new Node(x);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
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

void printMiddle(Node *head)
{
    int n = size(head);
    Node *temp = head;

    if (n % 2 == 1)
    {
        for (int i = 1; i < n / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
    else
    {
        for (int i = 1; i < n / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->data << " " << temp->next->data << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    userInput(head, tail);
    printMiddle(head);

    return 0;
}