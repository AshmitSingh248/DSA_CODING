#include <bits/stdc++.h>
#include <stdio.h>
#include <queue>
using namespace std;
typedef struct node // defining the elements of the node.
{
    int data;
    node *left;
    node *right;
} node;
node *root = NULL;         // initially the root is null.
node *createnode(int data) // creates a new node or a tree.
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    newnode->right = NULL;
    newnode->left = NULL;
    return newnode;
}
void preordertraversal(node *node)
{
    if (node != NULL)
    {
        cout << node->data << " ";
        preordertraversal(node->left);  // traverse to the left of root node.
        preordertraversal(node->right); // traverse to the right of root node.
    }
}
void inordertraversal(node *node)
{
    if (node != NULL)
    {
        inordertraversal(node->left);
        cout << node->data << " ";
        inordertraversal(node->right);
    }
}
void postordertraversal(node *node) // REMEMBER the difference between all three traversal using the position of cout function. For example, in postorder cout is in last
                                    //  last position while for inorder it is in the middle position.
{
    if (node != NULL)
    {
        postordertraversal(node->left);
        postordertraversal(node->right);
        cout << node->data << " ";
    }
}
/*void levelordertraversal(node *node)
{
    if (node == NULL)
        return;
    queue<node*> qnode;
    qnode.push(node);

    while (!qnode.empty())
    {
        node *temp = qnode.front();
        qnode.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
        {
            qnode.push(temp->left);
        }
        if (temp->right != NULL)
        {
            qnode.push(temp->right);
        }
    }
}*/
int main()
{
    root = createnode(5); // creating the tree until 2 in the data.
    root->left = createnode(6);
    root->right = createnode(7);
    root->left->left = createnode(4);
    root->left->right = createnode(3);
    root->right->left = createnode(2);
    cout << "preordertaversal= ";
    preordertraversal(root); // call from the root function.
    cout << "postordertraversal= ";
    postordertraversal(root);
    cout << "inordertraversal= ";
    inordertraversal(root);
    // cout << "Level order traversal= ";
    // levelordertraversal(root);
}