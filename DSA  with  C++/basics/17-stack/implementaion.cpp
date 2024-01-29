#include <iostream>

using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int value)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = value;
        }
        else
        {
            cout << "Stack Overflow!" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};
int main()

{
    Stack s(5);
    s.push(34);
    s.push(50);
    s.push(44);
    s.push(36);
    s.push(50);

    s.pop();

    cout << s.peek() << endl;

    if (s.isempty())
    {
        cout << "The stack is empty!" << endl;
    }
    else
        cout << "The stack is not empty!" << endl;

    return 0;
}