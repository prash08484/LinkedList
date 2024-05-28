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

Node *deleteBack(Node *head)
{
    Node *temp = head;
    if (temp == nullptr)
    {
        return temp;
    }
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = nullptr;
    return head;

    /*

    // by Sir:
    if (temp == nullptr)
    {
        return temp;
    }
 if(head->next==nullptr){
    delete head;
    return nullptr;
 }
 Node *curr=head;
    while (curr->next->next != nullptr)
    {
        curr = curr->next;
    }
    delete (curr->next); // memory deallocation
    curr->next = nullptr;
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