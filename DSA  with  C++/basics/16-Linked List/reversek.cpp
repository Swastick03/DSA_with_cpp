#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for : " << value << endl;
    }
};

void inserthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;

    head = temp;
}

void inserttail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatposi(Node *&tail, Node *&head, int position, int d)
{

    // insert at 1st
    if (position == 1)
    {
        inserthead(head, d);
        return;
    }
    int i = 1;
    Node *temp = head;

    while (i < position - 1)
    {
        temp = temp->next;
        i++;
    }

    // insert at last
    if (temp->next == NULL)
    {
        inserttail(tail, d);
        return;
    }

    Node *t1 = new Node(d);
    t1->next = temp->next;
    temp->next = t1;
}

void deleteat(Node *&head, Node *&tail, int position)
{
    // at start position
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *cur = head;
        Node *prev = NULL;
        int i = 1;

        while (i < position)
        {
            prev = cur;
            cur = cur->next;
            i++;
        }
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
        if (prev->next == NULL)
        {
            tail = prev;
        }
    }
}
void print(Node *&head)
{
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data << " -> ";
        t = t->next;
    }
    cout << endl;
}
Node *reversek(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    Node *front = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while (count < k && curr != NULL)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
        count++;
    }
    if (front != NULL)
    {
        head->next = reversek(front, k);
    }
    return prev;
}
int main()

{

    Node *n1 = new Node(10);
    // cout << "Data: " << n1->data << endl;
    // cout << "Next add: " << n1->next << endl;

    Node *head = n1;
    Node *tail = n1;
    print(head);

    inserthead(head, 12);
    print(head);

    inserttail(tail, 67);
    print(head);

    insertatposi(tail, head, 4, 45);
    print(head);

    inserttail(tail, 87);
    print(head);

    inserttail(tail, 60);
    print(head);

    cout << "Head:  " << head->data << endl;
    cout << "Tail:  " << tail->data << endl;
    Node *t = reversek(head, 2);

    print(t);

    // deleteat(head, tail, 4);
    // print(head);
    // cout << "Head:  " << head->data << endl;
    // cout << "Tail:  " << tail->data << endl;

    return 0;
}