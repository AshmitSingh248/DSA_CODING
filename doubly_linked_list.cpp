#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
class dllnode
{
public:
    int data;
    dllnode *next;
    dllnode *prev;
    dllnode(int node_data) // constructor
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
class dll
{
public:
    dllnode *head;
    dll()
    {
        this->head = nullptr;
    }
    void insert_beginning(int data)
    {
        dllnode *node = new dllnode(data);
        if (head == nullptr)
        {
            node->data = data;
            node->next = NULL;
            node->prev = NULL;
            head = node;
        }
        else
        {
            node->data = data;
            node->next = head;
            node->prev = NULL;
            head->prev = node;
            head = node;
        }
    }
    void insert_end(int data)
    {
        dllnode *node = new dllnode(data);
        dllnode *temp = head;
        node->data = data;
        node->next = NULL;
        node->prev = NULL;
        if (head == nullptr)
        {
            head = node;
            return;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = node;
            node->prev = temp;
        }
    }
    void insert_middle(int data, int pos)
    {
        dllnode *node = new dllnode(data);
        node->data = data;
        node->next = NULL;
        node->prev = NULL;
        dllnode *temp = head;
        if (temp == NULL)
        {
            head = node;
            return;
        }
        int count = 1;
        while (count < pos && temp->next != NULL)
        {
            count++;
            temp = temp->next;
        }
        if (temp->next == NULL) // position is the last element.
        {
            temp->next = node;
            node->prev = temp;
            return;
        }
        node->next = temp->next;
        node->prev = temp;
        temp->next->prev = node;
        temp->next = node;
    }
    void delete_beginning()
    {
        dllnode *temp = head;
        if (temp == NULL) // no elements is the linked list.
        {
            head = NULL;
            cout << "Linked list is empty" << endl;
            return;
        }
        if (temp->next == NULL) // only one element.
        {
            head = NULL;
            free(temp);
            return;
        }
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        free(temp);
    }
    void delete_end()
    {
        dllnode *temp = head;
        if (temp == NULL) // no elements is the linked list.
        {
            head = NULL;
            cout << "Linked list is empty" << endl;
            return;
        }
        if (temp->next == NULL) // only one element.
        {
            head = NULL;
            free(temp);
            return;
        }
        while (temp->next->next != NULL) // temp points to 3rd last element.
        {
            temp = temp->next; // temp points to 2nd last element.
        }
        dllnode *temp1 = temp->next;
        temp->next = NULL;
        temp1->prev = NULL;
        free(temp1);
    }
    void delete_middle(int pos)
    {
        dllnode *temp = head;
        if (temp == NULL) // no elements is the linked list.
        {
            head = NULL;
            cout << "Linked list is empty" << endl;
            return;
        }
        if (temp->next == NULL) // only one element.
        {
            head = NULL;
            free(temp);
            return;
        }
        int count = 1;
        while (count < pos - 1)
        {
            count++;
            temp = temp->next; // after the loop temp points to the position just before the element to be deleted.
        }
        dllnode *temp1 = temp->next;
        temp->next = temp1->next;
        temp1->next->prev = temp;
        temp1->next = NULL;
        temp1->prev = NULL;
        free(temp1);
    }
};
void printlist(dllnode *head)
{
    dllnode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        dll *llist = new dll(); // creates a linked list and always points the head to null.
        int i, n;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            llist->insert_beginning(data);
        }
        cout << "inserting from beginning ";
        printlist(llist->head);

        llist->head = NULL;
        for (i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            llist->insert_end(data);
        }
        cout << "inserting from end ";
        printlist(llist->head);
        int pos;
        cin >> pos;
        int data;
        cin >> data;
        llist->insert_middle(data, pos);
        cout << "inserting at pos " << pos << ":";
        printlist(llist->head);
        llist->delete_beginning();
        cout << "Deleting the element at beginning: ";
        printlist(llist->head);
        llist->delete_end();
        cout << "Deleting the element at end: ";
        printlist(llist->head);
        cout << "Enter the position: ";
        cin >> pos;
        llist->delete_middle(pos);
        printlist(llist->head);
    }
    return 0;
}