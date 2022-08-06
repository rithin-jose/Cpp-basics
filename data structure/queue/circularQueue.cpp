#include<iostream>

using namespace std;

class Queue{
    int front;
    int rear;
    int size;
    int* queue;

    public:
        Queue(int s){
            front=-1;
            rear=-1;
            size=s;
            queue = new int[s];
        }

        void enqueue(int data);
        void dequeue();
        void display();

};

void Queue::enqueue(int data){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[front]=data;
        cout<<"Data inserted.";
    }
    else if((rear==size-1 && front == 0) || rear==front-1){
        cout<<"Queue Overflow";
    }
    else{
        rear=(rear+1) % size;    //after reaching end it resets to 0 by modulus operator
        queue[rear]=data;
    }
}

void Queue::dequeue(){
    if(front==-1 && rear==-1)
        cout<<"Queue Underflow";

    else if(front == rear){
        cout<<"Data to be deleted is "<<queue[front]<<endl;
        front=rear=-1;
    }
    else{
        cout<<"Data to be deleted is "<<queue[front]<<endl;
        front=(front+1)%size;
    }

    
}

void Queue::display(){
    if(front==-1 && rear==-1)
        cout<<"Queue Underflow";
    
    else{
        if(rear>=front){
            for(int i=front;i<=rear;i++)
                cout<<queue[i]<<" ";
        }
        else{
            for (int i = front; i < size; i++)
                cout<<queue[i]<<" ";
 
            for (int i = 0; i <= rear; i++)
                cout<<queue[i]<<" ";
        }
    }
}

int main()
{
    Queue q(4);
    int data,ch;
    string ans;


        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);

    do{
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "Entre your Choice: ";
        
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"Enter data: ";
                cin>>data;
                q.enqueue(data);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            default:
                cout << "Wrong Choice";
                break;
        }
        cout << "Do you wish to continue? ";
        cin >> ans;
    }while(ans=="y"||ans=="Y");


    return 0;
} 