#include <bits/stdc++.h>
using namespace std;
typedef struct Queue
{
    int front, rear;
    int size, capacity;
    int *arr;

} Queue;
Queue *createqueue(int capacity)
{
    Queue *qu = (Queue *)malloc(sizeof(Queue));
    qu->capacity = capacity;
    qu->front = 0;
    qu->rear = capacity - 1;
    qu->size = 0;
    qu->arr = (int *)malloc(qu->capacity * sizeof(int)); // size allocated to the array.
    return qu;
}
int isfull(Queue *queue)
{
    return queue->size == queue->capacity;
}
int isempty(Queue *queue)
{
    return queue->size == 0;
}
void enqueue(Queue *queue, int data)
{
    if (isfull(queue))
    {
        cout << "Queue is full.";
        return;
    }
    queue->rear = (queue->rear + 1) % (queue->capacity);
    queue->arr[queue->rear] = data;
    queue->size = queue->size + 1;
}
void dequeue(Queue *queue)
{
    if (isempty(queue))
    {
        cout << "Queue is empty.";
    }
    int data = queue->arr[queue->front];
    queue->front = queue->front + 1 % queue->capacity;
    queue->size = queue->size - 1;
}
int front(Queue *queue)
{
    if (isempty(queue))
    {
        cout << "Queue is empty.";
    }
    return queue->arr[queue->front];
}
void display(Queue *queue)
{
    for (int i = 0; i < queue->size; i++)
    {
        cout << queue->arr[(queue->front + i) % queue->capacity];
    }
}
int main()
{
    int capacity, i, n;
    cin >> capacity >> n;
    Queue *queue = createqueue(capacity);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        enqueue(queue, arr[i]);
        display(queue);
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        dequeue(queue);
        display(queue);
        cout << endl;
    }
    return 0;
}
