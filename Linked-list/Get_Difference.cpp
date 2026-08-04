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


void diff_max_min(Node* head) {
    if(head == NULL) {
        return;
    }

    int max_val = head->data;
    int min_val = head->data;

    Node* temp = head;
    while(temp != NULL) {
        if(temp->data > max_val) {
            max_val = temp->data;
        }
        if(temp->data < min_val) {
            min_val = temp->data;
        }
        temp = temp->next;
    }

    int difference = max_val - min_val;
    cout << difference << endl;
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    while(true) {
        int val;
        cin >> val;

        if(val == -1) {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    diff_max_min(head);

    return 0;
}