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

bool isSorted(Node *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    Node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
        {
            return false;
        }
        temp = temp->next;
    }

    return true;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    userInput(head, tail);

    if (isSorted(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}