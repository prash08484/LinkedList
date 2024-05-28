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

void NthNodeFromEnd(Node *head, int n)
{
    /*
    // method 4:
    // By Sir: one traversal two pointer one is n ahead then move with same speed
    if(head==nullptr) return ;
    Node *first=head;
    for(int i=0;i<n;i++){
        if(first==nullptr) return ;
        first=first->next;
    }
    Node *second =head;
    while(first!=nullptr){
        second =second->next;
        first=first->next;
    }
    cout<<second->data;
    return;

    */
    /*
    // method 3:
    // By Sir: two traversal
    int len=0;
    for(Node *curr =head ; curr!=nullptr; curr=curr->next){
        len++;
        if(len<n){
            return;
        }
        Node *curr =head;
        for(int i=1;i<len-n+1; i++){
            curr=curr->next;
        }
        cout<<curr->data<<" ";
        return;
    }


        */

    /*
    // Method 2:
    // By self : single traversal  two pointer one travel n faster ;
    Node* temp1=head,*temp2=head;
    for(int i=1;i<=n;i++){
    temp1=temp1->next;
    }
    while(temp1!=nullptr){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    cout<<temp2->data<<endl;
    */
    /*
        // method 1:
    //  By self: two traversal
        Node *temp=head;
        int count=1;
        while(temp->next!=nullptr){
    count++;
    temp=temp->next;
        }
        cout<<count<<endl;
        delete temp->next;
        delete temp;
        for(int i=1; i<=count-n; i++){
            head=head->next;
        }
        cout<<head->data;
        return;
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