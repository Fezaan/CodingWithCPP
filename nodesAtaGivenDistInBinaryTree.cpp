//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:
public:
    bool dfs(Node *curr, int target, vector<Node *> &v)
    {
        if (curr->data == target)
        {
            v.push_back(curr);
            return true;
        }
        if (curr->left)
        {
            if (dfs(curr->left, target, v))
            {
                v.push_back(curr);
                return true;
            }
        }
        if (curr->right)
        {
            if (dfs(curr->right, target, v))
            {
                v.push_back(curr);
                return true;
            }
        }
        return false;
    }

    void f(Node *curr, vector<int> &fin, int depth)
    {
        if (depth == 0)
        {
            fin.push_back(curr->data);
            return;
        }
        if (curr->left)
            f(curr->left, fin, depth - 1);
        if (curr->right)
            f(curr->right, fin, depth - 1);
    }

    vector<int> KDistanceNodes(Node *root, int target, int k)
    {
        // return the sorted vector of all nodes at k dist
        vector<Node *> v;
        dfs(root, target, v);
        reverse(v.begin(), v.end());
        // for(auto it: v){
        //     cout<<it->data<<" ";
        // }
        // cout<<endl;
        int len = v.size();
        vector<int> fin;
        if (len == 0)
            return fin;
        int dis = k;
        for (int i = len - 1; i >= 0; i--)
        {
            // cout<<v[i]->data<<endl;
            if (dis == 0)
                fin.push_back(v[i]->data);
            if (i == len - 1)
            {
                if (v[i]->left)
                    f(v[i]->left, fin, dis - 1);
                // cout<<fin.back()<<" ";
                if (v[i]->right)
                    f(v[i]->right, fin, dis - 1);
                // cout<<fin.back()<<" ";
            }
            else
            {
                if (v[i + 1] == v[i]->left)
                {
                    if (v[i]->right)
                        f(v[i]->right, fin, dis - 1);
                    // cout<<fin.back()<<" ";
                }
                else
                {
                    if (v[i]->left)
                        f(v[i]->left, fin, dis - 1);
                    // cout<<fin.back()<<" ";
                }
            }
            // cout<<endl;
            dis--;
        }
        sort(fin.begin(), fin.end());
        return fin;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    getchar();

    Solution x = Solution();

    while (t--)
    {
        string s;
        getline(cin, s);
        Node *head = buildTree(s);

        int target, k;
        cin >> target >> k;
        getchar();

        vector<int> res = x.KDistanceNodes(head, target, k);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends