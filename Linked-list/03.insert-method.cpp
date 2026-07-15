#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
    

}

void insertAtPosition(Node*& head, Node*& tail, int pos, int val) {
    if(pos == 0) {
        insertAtHead(head, val);

        if(tail == NULL) {
            tail = head;
        }

        return;
    }

    Node* temp = head;

    for(int i = 0; i < pos -1; i++) {
        temp = temp->next;
    }

    if(temp->next == NULL) {
        insertAtTail(head, tail, val);
        return;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;

}

 void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;

    insertAtHead(head, 5);

    insertAtPosition(head, third, 3, 25);

    insertAtTail(head, third, 40);


    print_linked_list(head);

    return 0;
}