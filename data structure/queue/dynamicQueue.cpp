#include <iostream>

using namespace std;


struct Node
{
    int data;
    Node *next = NULL;
};

class Queue
{
    Node* front;
    Node* rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data);
    void dequeue();
    void display();
};


void Queue::enqueue(int data)
{
    Node* nodeptr;
    nodeptr=new Node;
    nodeptr->data=data;

    if(front==NULL){
        front = nodeptr;
    }
    else{
        rear->next=nodeptr;
    }
    rear=nodeptr;
    cout<<"Node Inserted"<<endl;
}

void Queue::dequeue()
{
    if(front==NULL)
        cout<<"Queue Underflow"<<endl;
    
    else{
        Node* temp = front;
        front=front->next;

        cout<<"Element to be deleted "<<temp->data<<endl;
        delete temp;
    }
    
}

void Queue::display()
{
    if(front == NULL)
        cout<<"Queue underflow"<<endl;
    
    else{
        Node* temp;
        for(temp=front;temp!=NULL;temp=temp->next){
            cout<<temp->data<<" "; 
        }
        cout<<endl;
    }
}

int main()
{
    int  ch, data;
    string ans;
    Queue queue;

    do{
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "Entre your Choice: ";

        cin>>ch;

        switch(ch){
            case 1:
                cout << "Enter data to be inserted: ";
                cin >> data;
                queue.enqueue(data);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.display();
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