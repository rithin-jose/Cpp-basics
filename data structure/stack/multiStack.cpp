#include<iostream>

using namespace std;

class Stack{
    int* arr; 
    int* top; 
    int* boundary; 
    int array_size;

    int n,k;

    public:
        Stack(int size,int n);
        void push(int item,int stack_no);
        void pop(int stack_no);
        void display();
};

Stack::Stack(int size,int n){
    array_size=size;
    arr = new int[size];
    top = new int[n];
    boundary = new int[n+1];

    top[0] = boundary[0] = -1;

    for (int j = 1; j < n; j++)
        top[j] = boundary[j] = (size / n * j) -1;

    boundary[n] = size - 1; 
}

void Stack::push(int item,int stack_no){

    if(top[stack_no] == boundary[stack_no + 1])
        cout << "Stack Overflow" << endl;
    else
        arr[++top[stack_no]] = item;
}

void Stack::pop(int stack_no){
    if (top[stack_no] == boundary[stack_no])
        cout << "Stack Underflow" << endl;

    else{
        top[stack_no] = 0;
        arr[top[stack_no]--];
    }
} 

void Stack::display(){
    cout<<endl;
    for (int i = 0; i < array_size; i++)  
        cout << arr[i] <<endl;
    cout<<endl;
}

int main(){
    int n, ch, item,stack_no;
    char ans;
    int size;


    cout<<"Enter total size: ";
    cin>>size;

    cout << "Enter no of stack: ";
    cin >> n;

    Stack s(size,n);

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
            cout<<"Enter data to be inserted: ";
            cin>>item;
            cout<<"Enter Stack no.: ";
            cin>>stack_no;

            s.push(item,stack_no);
            break;

        case 2: 
            cout<<"Enter Stack no.: ";
            cin>>stack_no;  

            s.pop(stack_no);           
            break;

        case 3:
            s.display();
            break;
        }
        cout << "Do you want to continue: ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    return 0;
}