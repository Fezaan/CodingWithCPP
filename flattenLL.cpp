/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

/*  Function which returns the  root of
    the flattened linked list. */
Node *merge(Node *a, Node *b)
{
    Node *tmp = new Node(0);
    Node *res = tmp;
    while (a != NULL && b != NULL)
    {
        if (a->data < b->data)
        {
            tmp->bottom = a;
            tmp = tmp->bottom;
            a = a->bottom;
        }
        else
        {
            tmp->bottom = b;
            tmp = tmp->bottom;
            b = b->bottom;
        }
    }
    if (a)
        tmp->bottom = a;
    else
        tmp->bottom = b;

    return res->bottom;
}

Node *flatten(Node *root)
{
    // Your code here
    if (root == NULL || root->next == NULL)
        return root;
    root->next = flatten(root->next);
    root = merge(root, root->next);

    return root;
}
