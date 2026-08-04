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


void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;

}


void print_linked_list(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


void sort_linked_list(Node* head) {
    Node* temp = head;

    for(Node* i = head; i != NULL; i= i->next) {
        for(Node* j = i->next; j != NULL; j= j->next) {
            if(i->data > j->data) {
                swap(i->data, j->data);
            }
        }
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) {
        cin >> val;

        if(val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}