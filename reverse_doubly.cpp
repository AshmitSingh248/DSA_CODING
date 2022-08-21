#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;

    struct node *next;
    struct node *prev;
};
node *head = NULL;
void insert_end(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    node *temp = head;
    if (temp == NULL)
    {
        head = newnode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
    newnode->prev = temp;
}
void reverse(node **head)
{
    struct node *previous = NULL;
    struct node *current = *head;
    while (current != NULL)
    {
        previous = current->prev;
        current->prev = current->next;
        current->next = previous;
        current = current->prev;
    }
    if (previous != NULL) // immportant
        *head = previous->prev;
    return;
}
void print()
{
    node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}
int main()
{
    int i, n;
    cin >> n;
    int data;
    for (i = 0; i < n; i++)
    {
        cin >> data;
        insert_end(data);
    }
    cout << "Linked list is: ";
    print();
    cout << "Reverse of the list is: ";
    reverse(&head);
    print();
    return 0;
}