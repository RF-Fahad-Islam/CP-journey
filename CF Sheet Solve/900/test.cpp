#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    void append(int data){
        Node* new_node = new Node(data);
        if (this->head == NULL){
            this->head= new_node;
            return;
        }
        Node* last_node = this->head;
        while(last_node->next != NULL){
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }
    void display(){
        Node* temp = this->head;
        while(temp != NULL){
            cout << temp-> val << " -> ";
            temp = temp->next;
        }
    }
};

int main(){

    Node* head = new Node(5);
    Node* a = new Node(3);
    Node* b = new Node(1);
    Node* c = new Node(4);
    LinkedList* ll = new LinkedList();
    ll->append(3);
    ll->append(4);
    ll->append(5);
    ll->display();
    // head-> next = a;
    // a-> next = b;
    // b-> next = c;
    // Node* temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->val << " ";
    //     temp = temp->next;
    // }
    
    return 0;
}