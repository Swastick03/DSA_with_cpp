#include <iostream>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node *root)
{ // LNR
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " , ";
    inorder(root->right);
}

void preorder(node *root)
{ // NLR
    if (root == NULL)
        return;
    cout << root->data << " , ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{ // LRN
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " , ";
}

void morrisinorder(node *root)
{
    node *cur, *pre;
    if (root == NULL)
        return;
    cur = root;

    while (cur != NULL)
    {
        if (cur->left == NULL)
        {
            cout << cur->data << " , ";
            cur = cur->right;
        }
        else
        {
            pre = cur->left;
            while (pre->right != NULL && pre->right != cur)
            {
                pre = pre->right;
            }

            if (pre->right == NULL)
            {
                pre->right = cur;
                cur = cur->left;
            }
            else
            {
                pre->right = NULL;
                cout << cur->data << " , ";
                cur = cur->right;
            }
        }
    }
}

void morrispreorder(node *root)
{
    node *cur, *pre;
    if (root == NULL)
        return;
    cur = root;

    while (cur != NULL)
    {
        if (cur->left == NULL)
        {
            cout << cur->data << " , ";
            cur = cur->right;
        }
        else
        {
            pre = cur->left;
            while (pre->right != NULL && pre->right != cur)
            {
                pre = pre->right;
            }

            if (pre->right == NULL)
            {
                pre->right = cur;
                cout << cur->data << " , ";
                cur = cur->left;
            }
            else
            {
                pre->right = NULL;
                cur = cur->right;
            }
        }
    }
}

int main()

{
    node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout << "Printing the nodes" << endl;
    levelorder(root);
    cout << endl
         << "Inorder is:" << endl;
    inorder(root);

    cout << endl
         << "Preorder is:" << endl;
    preorder(root);

    cout << endl
         << "Postorder is:" << endl;
    postorder(root);

    cout << endl
         << "Morris Inorder is:" << endl;
    morrisinorder(root);

    cout << endl
         << "Morris Preorder is:" << endl;
    morrispreorder(root);

    return 0;
}