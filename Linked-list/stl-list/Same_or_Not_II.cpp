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

class Stack
{
public:
    Node *head;

    Stack()
    {
        head = NULL;
    }

    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }

    int top()
    {
        return head->data;
    }

    void pop()
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    bool empty()
    {
        return head == NULL;
    }
};

class Queue
{
public:
    Node *head;
    Node *tail;

    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int x)
    {
        Node *newNode = new Node(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int front()
    {
        return head->data;
    }

    void pop()
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == NULL)
        {
            tail == NULL;
        }
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Stack st;
    Queue q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES" << endl;

    return 0;
}