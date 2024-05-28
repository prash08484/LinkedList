#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int a)
    {
        data = a;
        next = nullptr;
    }
};

Node *insertAtPos(Node *head, int pos, int n)
{
    Node *temp = head;
    int p = 1;
    while (temp->next != nullptr)
    {
        p++;
        if (pos == p)
        {
            break;
        }
        temp = temp->next;
    }
    Node *a = new Node(n);
    a->next = temp->next;
    temp->next = a;
    return head;
    /*
    // by SIR:
    Node* temp=new Node(n);
    if(pos==1){
    temp->next=head;
    return temp;
    }

    Node* curr=head;
    for(int i=1;i<=pos-2&&curr!=nullptr;i++){
        curr=curr->next;
    }
    if(curr=nullptr){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;

    */
}




int main()
{
    cout << "Welcome to LinkedList\n";
    Node *head = new Node(10);
    head->next = new Node(30);
    head->next->next = new Node(40);
    head->next->next->next = new Node(60);
    head->next->next->next->next = new Node(160);
     
    /* Checking Function Started */
 

    /* Checking Function Ended */
    return 0;
}