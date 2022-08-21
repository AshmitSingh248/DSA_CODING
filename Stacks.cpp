#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
typedef struct Stack
{
    int capacity;
    int top;
    int *arr;
} Stack;
Stack *initializestack(int capacity) // Function to initialize stack.
{
    Stack *st = (Stack *)malloc(sizeof(Stack));
    st->capacity = capacity;
    st->top = -1;
    st->arr = (int *)malloc(sizeof(int) * capacity);
    return st;
}
int size(Stack *st)
{
    return st->top + 1;
}
int isempty(Stack *st)
{
    return st->top == -1;
}
int isfull(Stack *st)
{
    return st->top + 1 == st->capacity;
}
void push(Stack *st, int data)
{
    if (isfull(st))
    {
        cout << "stack is full.";
        return;
    }
    st->top = st->top + 1;
    st->arr[st->top] = data;
}
int peek(Stack *st)
{
    if (isempty(st))
    {
        cout << "Stack is empty.";
        return -1;
    }
    return st->arr[st->top];
}
int pop(Stack *st)
{
    if (isempty(st))
    {
        cout << "Stack is empty.";
        return -1;
    }
    int ell = st->arr[st->top];
    st->top = st->top - 1;
    return ell;
}
int main()
{
    int capacity; // max elements.
    int n;        // elements.
    cin >> capacity >> n;
    Stack *st = initializestack(capacity);
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        push(st, ele);
    }
    cout << "Top of stack is: " << peek(st) << endl;
    cout << "Size of stack is: " << size(st) << endl;
    cout << "Popping all elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << pop(st);
    }
    return 0;
}
