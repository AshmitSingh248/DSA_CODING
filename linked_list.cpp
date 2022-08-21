#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *createlist(struct node *head)
{
    struct node *newnode, *temp;
    for (int i = 0; i < 5; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            return head;
        }
        newnode->data = i;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        temp->next = newnode;
        temp = newnode;
    }
    return head;
}
void print(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }
}
int main()
{
    struct node *head = NULL;
    head = createlist(head);
    print(head);
    return 0;
}