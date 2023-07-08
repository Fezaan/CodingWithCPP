//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

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
    Node *root = new Node(stoi(ip[0]));

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

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

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

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// } Driver Code Ends
// User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
public:
    Node *markParent(Node *root, unordered_map<Node *, Node *> &parent, int target)
    {
        queue<Node *> q;
        Node *res;
        q.push(root);
        while (!q.empty())
        {
            Node *tmp = q.front();
            q.pop();
            if (tmp->data == target)
                res = tmp;
            if (tmp->left)
            {
                q.push(tmp->left);
                parent[tmp->left] = tmp;
            }
            if (tmp->right)
            {
                q.push(tmp->right);
                parent[tmp->right] = tmp;
            }
        }
        return res;
    }
    int minTime(Node *root, int target)
    {
        // Your code goes here
        if (!root)
            return 0;
        unordered_map<Node *, Node *> parent;
        Node *tnode = markParent(root, parent, target);

        unordered_map<Node *, bool> visit;
        queue<Node *> q;
        q.push(tnode);
        visit[tnode] = true;
        int cnt = 0;
        bool flag = false;
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                Node *tmp = q.front();
                q.pop();
                if (tmp->left && !visit[tmp->left])
                {
                    flag = true;
                    q.push(tmp->left);
                    visit[tmp->left] = true;
                }
                if (tmp->right && !visit[tmp->right])
                {
                    flag = true;
                    q.push(tmp->right);
                    visit[tmp->right] = true;
                }
                if (parent[tmp] && !visit[parent[tmp]])
                {
                    flag = true;
                    q.push(parent[tmp]);
                    visit[parent[tmp]] = true;
                }
            }
            if (flag)
                cnt++;
        }
        return cnt == 0 ? 0 : cnt - 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int tc;
    scanf("%d ", &tc);
    while (tc--)
    {
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin >> target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout << obj.minTime(root, target) << "\n";

        cin.ignore();
    }

    return 0;
}

// } Driver Code Ends