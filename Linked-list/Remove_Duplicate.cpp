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

void remove_duplicate(Node *&head, Node *&tail)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *temp = current;

        while (temp->next != NULL)
        {
            if (temp->next->data == current->data)
            {
                Node *deleteNode = temp->next;
                temp->next = temp->next->next;

                if (deleteNode == tail)
                {
                    tail = temp;
                }
                delete deleteNode;
            }
            else
            {
                temp = temp->next;
            }
        }
        current = current->next;
    }
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    remove_duplicate(head, tail);

    print_list(head);

    return 0;
}