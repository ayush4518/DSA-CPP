#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }

};

Node* insertAtHead(Node* head, int val){
            if(head == NULL){
                Node* newNode = new Node(val);
                head = newNode;
                return head;
            }else{
            Node* temp = head;
            Node* newNode = new Node(val);
            newNode->next = temp;
            head = newNode;
            return head;
            }
        }


        void print(Node* head){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
        }



int main()
{
    
    Node* head = NULL;
    head = insertAtHead(head, 10);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);
    head = insertAtHead(head, 40);
    head = insertAtHead(head, 50);

    print(head);
    

    return 0;
}