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

void printMiddle(Node *head)
{

    /*
    // Method 0(a):
    // Efficient by Sir   : in one traversal
    // By Sir: Slow (move one step )and fast pointer (move two step)
if(head==nullptr){
    return;
}
Node *slow= head,*fast=head;
while(fast!=nullptr&&fast->next!=nullptr){
    slow=slow->next;
    fast=fast->next->next;
}
cout<<slow->data;
return;

    // Method 0(b):
    // Efficient   : in one traversal
    // By Self: Slow (move one step )and fast pointer (move two step)

    if(head==nullptr){
    return;
    }
    if(head->next==nullptr){
    cout<<head->data<<endl;
    return;
    }
    if(head->next->next==nullptr){
    cout<<head->next->data<<endl;
    return;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr){
    slow=slow->next;
    fast=fast->next->next;
    if(fast->next==nullptr){break;}
    if(fast->next->next==nullptr){
    slow=slow->next;
    break;
    } }
    cout<<slow->data;
    */

    /*  Method 1: by two traversal
    // By Sir :

    if(head==nullptr) return;
    int count =0;
    Node *curr;
    for(curr=head; curr1=nullptr; curr =curr->next){
        count ++;
    }
    curr=head;
    for(int i=0;i<count/2; i++){
        curr=curr->next;
            }
            cout<<curr->data;
            return ;
    */
    /*
     // Method 2: by two traversal
     // by Self
     int count = 1;
     Node *temp = head;
     while (temp->next != nullptr)
     {
         count++;
         temp = temp->next;
     }
     if (count % 2 == 0)
     {
         count += 2;
     }
     else
     {
         count += 1;
     }
     count /= 2;
     for (int i = 1; i <= count; i++)
     {
         if (i == count)
         {
             cout << head->data << endl;
             return;
         }
         head = head->next;
     }
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