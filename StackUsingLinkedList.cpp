#include <iostream>

using namespace std;

class Node 
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }
};

// stack class
class Stack 
{
private:
    Node* top;

public:
    Stack();
    {
        top = NULL;
    }
    int push(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
        }

        Node* temp = top;
        top = top->next;
        cout << "Popped value: " << top->data << endl;
    }    

    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
            