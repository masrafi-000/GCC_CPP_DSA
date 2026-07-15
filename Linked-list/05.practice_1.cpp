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


void printList(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}  

int size(Node* head) {
    int count = 0;
    Node* temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void userInput(Node*& head, Node*& tail) {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    userInput(head, tail);

    printList(head);
    cout << "Size of the list: " << size(head) << endl;

    return 0;
}