#include<iostream>

using namespace std;

class Queue{
    int* front;
    int* rear;
    int* boundary;
    int* arr;

    int queue_size;

    public:
        Queue(int size,int n);
        void enqueue(int item,int queue_no);
        void dequeue(int queue_no);
        void display();
};

Queue::Queue(int size,int n){
    queue_size=size;
    front = new int[n];
    rear = new int[n];
    boundary = new int[n+1];

    front[0]=rear[0]=boundary[0]=-1;

    for(int j=1;j<queue_size;j++)
        front[j]=rear[j]=boundary[j]=(queue_size/n)*j;

    boundary[n]=queue_size-1;
} 

void Queue::enqueue(int item,int queue_no){

}

void Queue::dequeue(int queue_no){

}

void Queue::display(){

}


int main()
{
    int n, ch, i, item, queue_no;
    char ans;
    int size;

    cout<<"Enter total size: ";
    cin>>size;

    cout << "Enter no of queue: ";
    cin >> n;

    Queue q(size,n);

     do
    {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "Enter you choice" << endl;

        cin >> ch;

        switch (ch)
        {
        case 1:
            cout<<"Enter data to be inserted: ";
            cin>>item;
            cout<<"Enter Stack no.: ";
            cin>>queue_no;

            q.enqueue(item,queue_no);
            break;

        case 2: 
            cout<<"Enter Stack no.: ";
            cin>>queue_no;  

            q.dequeue(queue_no);           
            break;

        case 3:
            q.display();
            break;
        }
        cout << "Do you want to continue: ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    return 0;
}