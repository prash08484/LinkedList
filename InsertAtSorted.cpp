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


Node *InsertInSorted(Node *head, int n)
{
    Node *temp = head;
    Node *res = new Node(n);
    while (temp->next != nullptr)
    {
        if (temp->data <= n && temp->next->data >= n)
        {
            res->next = temp->next;
            temp->next = res;
            return head;
        }
        temp = temp->next;
    }
    temp->next = res;
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