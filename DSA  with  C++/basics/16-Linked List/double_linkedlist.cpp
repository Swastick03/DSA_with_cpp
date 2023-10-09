#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for data: " << value << endl;
    }
};
// insert at head
void inserthead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *t = new Node(d);
        tail = t;
        head = t;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insert at tail
void inserttail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *t = new Node(d);
        tail = t;
        head = t;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at any position
void insertposi(Node *&head, Node *&tail, int posi, int d)
{
    if (posi == 1)
    {
        inserthead(head, tail, d);
        return;
    }
    int i = 1;
    Node *temp = head;
    while (i < posi - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp->next == NULL)
    {
        inserttail(head, tail, d);
        return;
    }

    Node *t = new Node(d);

    t->next = temp->next;
    t->prev = temp;
    temp->next->prev = t;
    temp->next = t;
}

// deletion
void deletion(Node *&head, Node *&tail, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int i = 1;
        Node *curr = head;
        Node *pre = NULL;
        while (i < position)
        {
            pre = curr;
            curr = curr->next;
            i++;
        }
        if (curr->next == NULL)
        {
            pre->next = curr->next;
            curr->prev = NULL;
            tail = pre;
            delete curr;
            return;
        }

        pre->next = curr->next;
        curr->next->prev = curr->prev;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}

// traversal
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "->" << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

// count length
void getlength(Node *&head)
{
    Node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    cout << "The length of linked list is: " << i << endl;
}
int main()

{

    Node *head = NULL;
    Node *tail = NULL;
    print(head);

    inserthead(head, tail, 56);
    print(head);

    inserthead(head, tail, 15);
    print(head);

    inserthead(head, tail, 25);
    print(head);

    inserttail(head, tail, 67);
    print(head);

    insertposi(head, tail, 4, 99);
    print(head);

    insertposi(head, tail, 1, 49);
    print(head);

    insertposi(head, tail, 7, 39);
    print(head);
    cout << endl
         << endl;

    deletion(head, tail, 1);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    deletion(head, tail, 6);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    getlength(head);

    return 0;
}