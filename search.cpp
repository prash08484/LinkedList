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

void rectsearch(Node *head, int n)
{
    if (head == nullptr)
    {
        cout << -1;
        return;
    }
    if (head->data == n)
    {
        cout << "It is present ";
        return;
    }
    rectsearch(head->next, n);
    return;
}
void funcsearch(Node *head, int n)
{
    while (head != nullptr)
    {
        if (head->data == n)
        {
            cout << "present\n";
            return;
        }
        head = head->next;
    }
    cout << "absent \n";
    return;
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