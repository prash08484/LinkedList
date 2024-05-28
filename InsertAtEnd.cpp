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

Node *insertEnd(Node *head, int n)
{
    Node *temp1 = head;
    Node *temp = new Node(n);
    while (temp1->next != nullptr)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
    return head;
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