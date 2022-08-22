/**********************************************************************************
    Note: Assume n is always less than 10
**********************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n, ch, i, data;
    char ans;
    int size = 10;
    int *stack = new int[size];

    cout << "Enter no of stack: ";
    cin >> n;

    int *top = new int[n];
    int *boundary = new int[n+1];

    top[0] = boundary[0] = -1;

    for (int j = 1; j < n; j++)
        top[j] = boundary[j] = (size / n * j) -1;

    boundary[n] = size - 1;

    do
    {
        cout << "1. Insert" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "Enter you choice" << endl;

        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Insert stack no.";
            cin >> i;
            cout << "Enter the data to be inserted:";
            cin >> data;

            if (top[i] == boundary[i + 1])
                cout << "Stack Overflow" << endl;

            else
                stack[++top[i]] = data;

            break;

        case 2:
            cout << "Insert stack no.";
            cin >> i;
            if (top[i] == boundary[i])
                cout << "Stack Underflow" << endl;

            else{
                top[i]=0;
                stack[top[i]--];
            }
                

            break;

        case 3:
            cout<<endl;
            for (int i = 0; i < size; i++)
            {   
                cout << stack[i] <<endl;
            }
            cout<<endl;
            break;
        }
        cout << "Do you want to continue: ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');

    return 0;
}