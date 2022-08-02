/********************************************************************
 *     Note Assumed a stack of size 10
 ********************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int push(int top, int stack[], int size)
{
    top++;

    if (top > size - 1)
    {
        cout << "Stack Overflow" << endl;
        return -1;
    }
    else
    {
        cout << "Enter data to be inserted ";
        cin >> stack[top];
        cout << "Element pushed" << endl;
        return top;
    }
}

int pop(int top, int stack[])
{

    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else
    {
        cout << "Popped item is " << stack[top] << endl;
        top--;
        return top;
    }
}

void display(int top, int stack[])
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout<<endl;
        cout << stack[top] <<" <----- top"<< endl;
        for (int i = top-1; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
        cout << endl;
    }
}

int main()
{
    const int size = 10;
    int stack[size], top = -1, ch, data;
    string ans;

    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "Entre your Choice: ";

        cin >> ch;
        int size = sizeof(stack) / sizeof(stack[0]);

        switch (ch)
        {
        case 1:
            top = push(top, stack, size);
            break;
        case 2:
            top = pop(top, stack);
            break;
        case 3:
            display(top, stack);
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