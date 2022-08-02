#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};

class Stack
{
    Node* top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int data);
    void pop();
    void display();
};

void Stack::push(int data)
{
    Node* nodeptr;
    nodeptr = new Node;
    nodeptr->data=data;

    if(top ==NULL){
        top=nodeptr;
    }
    else{
        nodeptr->next=top;
        top=nodeptr;
        cout<<"Data inserted."<<endl;
    }
}

void Stack::pop()
{

    if(top ==NULL){
        cout<<"Stack Underflow."<<endl;
    }
    else{
        Node* temp;

        temp=top;
        top=top->next;
        cout<<"Popped element is "<<temp->data<<endl;

        delete temp;
    }
}

void Stack::display()
{
    if(top == NULL){
        cout<<"Stack underflow"<<endl;
    }
    else{
         Node* temp;
        temp=top;

        cout<<endl;
        cout<<temp->data<<" <---- top "<<endl;
        temp=temp->next;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    int ch, data;
    string ans;
    Stack stack;

    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "Entre your Choice: ";

        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter data to be inserted: ";
            cin >> data;
            stack.push(data);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.display();
            break;

        default:
            cout << "Wrong Choice";
            break;
        }
        cout << "Do you wish to continue? ";
        cin >> ans;
    } while (ans == "Y" || ans == "y");
    return 0;
}