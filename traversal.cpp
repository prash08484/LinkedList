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
void func(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void rect(Node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    rect(head->next);
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