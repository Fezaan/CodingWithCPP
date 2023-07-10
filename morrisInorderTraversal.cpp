#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

vector<int> getInOrderTraversal(node *root)
{
    // Write your code here.
    vector<int> res;
    if (!root)
        return res;
    node *tmp = root;
    while (tmp != NULL)
    {
        if (tmp->left == NULL)
        {
            res.push_back(tmp->data);
            tmp = tmp->right;
        }
        else
        {
            node *prev = tmp->left;
            while (prev->right != NULL && prev->right != tmp)
                prev = prev->right;
            if (prev->right == NULL)
            {
                prev->right = tmp;
                tmp = tmp->left;
            }
            else
            {
                prev->right == NULL;
                res.push_back(tmp->data);
                tmp = tmp->right;
            }
        }
    }
}

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main()
{

    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->right = newNode(6);

    vector<int> preorder;
    preorder = getInOrderTraversal(root);

    cout << "The Preorder Traversal is: ";
    for (int i = 0; i < preorder.size(); i++)
    {
        cout << preorder[i] << " ";
    }

    return 0;
}