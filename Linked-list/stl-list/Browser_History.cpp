#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string data;
    Node *next;
    Node *prev;

    Node(string &data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
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

Node *search_address(Node *head, string address)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == address)
        {
            return temp;
        }

        temp = temp->next;
    }

    return NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string address;

    while (cin >> address && address != "end")
    {
        insert_at_tail(head, tail, address);
    }

    int t;
    cin >> t;

    Node *current = head;

    while (t--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string address;
            cin >> address;

            Node *found = search_address(head, address);

            if (found == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = found;
                cout << current->data << endl;
            }
        }
        else if (cmd == "next")
        {
            if (current->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = current->next;
                cout << current->data << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (current->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = current->prev;
                cout << current->data << endl;
            }
        }
    }

    return 0;
}