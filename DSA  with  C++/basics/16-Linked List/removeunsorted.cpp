#include <iostream>
#include <map>

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
void removeun(Node *&head)
{
    Node *temp = head;
    Node *prev = NULL;
    map<int, bool> visit;
    while (temp != NULL)
    {
        if (visit[temp->data] == true)
        {
            prev->next = temp->next;
            Node *todel = temp;
            todel->next = NULL;
            delete (todel);
            temp = prev->next;
        }
        else
        {
            visit[temp->data] = true;
            prev = temp;
            temp = temp->next;
        }
    }
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
    inserthead(head, 67);
    print(head);
    inserthead(head, 12);
    print(head);

    inserttail(tail, 67);
    print(head);

    insertatposi(tail, head, 4, 45);
    print(head);

    cout << "Head:  " << head->data << endl;
    cout << "Tail:  " << tail->data << endl;
    removeun(head);
    print(head);

    return 0;
}