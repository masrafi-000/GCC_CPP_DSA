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

bool hasDuplicate(Node* head) {
    bool visited[101] = {false};

    Node* temp = head;

    while(temp != NULL) {
        if(visited[temp->data]) {
            return true;
        }

        visited[temp->data] = true;
        temp = temp->next;
    }
    return false;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    userInput(head, tail);

    if(hasDuplicate(head)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
        

    return 0;
}